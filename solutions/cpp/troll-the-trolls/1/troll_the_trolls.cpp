namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus {
        troll,
        guest,
        user,
        mod
    };

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum class Action {
        read,
        write,
        remove
    };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus poster, AccountStatus viewer) {
        if (poster == AccountStatus::troll) return viewer == poster;
        else if (viewer == AccountStatus::troll) return true;
        else return true;
        
    }

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
        bool permission_check(Action permission, AccountStatus user) {
        switch(static_cast<int>(permission)){
            case 0:
                return true;
            case 1:
                if (user == AccountStatus::guest) return false;
                else                              return true;
            case 2:
                if (user == AccountStatus::mod) return true;
                else                            return false;
            default:
                return false;
        }        
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
        switch(static_cast<int>(player1)) {
            case 0:
                if (player2 == AccountStatus::troll) return true;
                else                                 return false;
            case 1:
                return false;
            case 2:
            case 3:
                if (player2 == AccountStatus::user
                    or player2 == AccountStatus::mod)  return true;
                else                                   return false;
            default:
                return false;
        }
    }

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus player1, AccountStatus player2) {
        int guy1 = static_cast<int>(player1);
        int guy2 = static_cast<int>(player2);

        return guy1 > guy2;
    }

}  // namespace hellmath
