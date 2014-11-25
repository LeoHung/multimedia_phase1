function plotGM(path)
    cd(path);
    conncomp = load('conncomp.csv');
    disp('components number:');
    disp(length(unique(conncomp(:,2))));
    maxComp = max(histc(conncomp(:,2), unique(conncomp(:,2))));
    disp('Max components members:');
    disp(maxComp);

    degreedist = load('degreedist.csv');
    outdegreedist = load('outdegreedist.csv');
    indegreedist = load('indegreedist.csv');

    degreedist = sortrows(degreedist,1);
    outdegreedist = sortrows(outdegreedist,1);
    indegreedist = sortrows(indegreedist,1);

    loglog(degreedist(:,1),degreedist(:,2));
    print -dpng degree.png;
    loglog(outdegreedist(:,1),outdegreedist(:,2));
    print -dpng outdegreedist.png;
    loglog(indegreedist(:,1),indegreedist(:,2));
    print -dpng indegreedist.png;
end