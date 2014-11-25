function pagerank()
filenames = dir('../intermediate_files');
%  filenames = {'soc-Slashdot0811-75000'; 'p2p-Gnutella31'; 'email-EuAll'; 'email-Enron.ungraph'; 'com-dblp.ungraph-75000'; 'com-amazon.ungraph-75000'; 'cit-HepTh'; 'cit-HepPh'; 'ca-AstroPh'; 'as-skitter.75000'};
m = size(filenames);
    for i = 1:m
       
        filename = filenames(i).name
        if regexp(filename, '^\.')
            continue
        end
        disp(filename);
        draw(strcat('../intermediate_files/', filename, '/pagerank.csv'), strcat('../figure/pagerank/', filename, '.png'), filename);

    end
end

function draw(filename, output_filename, title_str)

disp(filename);
pagerank = csvread(filename);

min_p = min(pagerank(:,2));
max_p = max(pagerank(:,2));
x_p = min_p:0.00001:max_p;
hist_pagerank = hist(pagerank(:,2), x_p);
title(title_str);
xlabel('pagerank value');
ylabel('frequency');
loglog(x_p, hist_pagerank);

print('-dpng','-r72',output_filename);

end

