- 1) {
        int mae, ato;
        mae = a[i] - d;
        ato = a[i] + d;

        if(mae > 0) {
            if (s[mae].find(i) != s[mae].end()) {
                auto itr = s[mae].upper_bound(i);
                int cnt = distance(itr, s[mae].end());
                ans += cnt;
                s[mae].erase(itr, s[mae].end());

            }
        }
        if (s[ato].find(i) != s[ato].end()) {
            auto itr = s[ato].upper_bound(i);
            int cnt = distance(itr, s[ato].end());
            ans += cnt;
            s[ato].erase(itr, s[ato].end());
        }

    } 

    cout << ans 