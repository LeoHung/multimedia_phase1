function [] = kcore()
filenames = dir('../intermediate_files');
% filenames = {'soc-Slashdot0811-75000'; 'p2p-Gnutella31'; 'email-EuAll'; 'email-Enron.ungraph'; 'com-dblp.ungraph-75000'; 'com-amazon.ungraph-75000'; 'cit-HepTh'; 'cit-HepPh'; 'ca-AstroPh'; 'as-skitter.75000'};
% filenames = {'as-skitter.75000'};
m = size(filenames);
    for i = 1:m
        filename = filenames(i).name;
        if regexp(filename, '^\.')
            continue
        end
        draw(strcat('../intermediate_files/', filename, '/k_core.csv'), strcat('../figure/k_core/', filename, '.csv'), filename);
    end
end

function draw(filename, output_filename, title_str)

s = dir(filename);
if s.bytes == 0
    dlmwrite(output_filename, [0, 0]);
    return
end

kcore = csvread(filename);
kcore(:,2) = kcore(:,2)+1;
[s, id] = hist(kcore(:,2), unique(kcore(:,2)));
s = s';
s = s(s>0);
[count, s] = hist(s, unique(s));

[m, n] = size(count);
if(m < n)
    count = count';
end
[m, n] = size(s);
if( m < n)
    s = s';
end

s = s(count> 0);
count = count(count>0);

outputM = [s, count];

dlmwrite(output_filename, outputM);

end
