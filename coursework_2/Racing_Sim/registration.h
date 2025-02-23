// функци€ регистрации гонки

static vector<TransportMeans *> registration(Type_race type_r, unsigned int dist, bool reuse)
{

    unsigned short opt{10};
    bool exist{0};           // флаг проверки зарегистрированного участника
    unsigned short idType{0};   // идентификатор типа гонки

    Participant participant{};

    Ground_race *groundR = nullptr;
    Air_race *airR = nullptr;
    Race *race = nullptr;

    static TransportMeans *camel = nullptr;
    static TransportMeans *camelHS = nullptr;
    static TransportMeans *centaur = nullptr;
    static TransportMeans *boots = nullptr;
    static TransportMeans *eagle = nullptr;
    static TransportMeans *broom = nullptr;
    static TransportMeans *carpet = nullptr;

    static vector<TransportMeans *> t_list;

    if (reuse == false)
    {
        camel = nullptr;
        camelHS = nullptr;
        centaur = nullptr;
        boots = nullptr;
        eagle = nullptr;
        broom = nullptr;
        carpet = nullptr;

        for (TransportMeans *obj : t_list)
            obj = nullptr;
        t_list.clear();
    }

    while (opt != 0)
    {
        if (t_list.size() < 2)
        {
            cout << "ƒолжно быть зарегистрировано хот€ бы 2 транспортных средства\n";
            cout << "\n\x1b[33m1. «арегистрировать транспорт\x1b[0m\n";
            cout << "¬ыберите действие: ";
            cin >> opt;
            cout << '\n';
        }

        while (opt != 0)
        {
            switch (type_r)
            {
            case Type_race::ground:
            {
                idType = 1;
                if (groundR == nullptr)
                {
                    groundR = new Ground_race;
                }
                cout << groundR->getName() << " –ассто€ние: " << dist << '\n';
                if (t_list.size() != 0)
                {
                    groundR->print_listRegPart(t_list);
                }

                groundR->print_list();
            }
            break;
            case Type_race::air:
            {
                idType = 2;
                if (airR == nullptr)
                {
                    airR = new Air_race;
                }
                cout << airR->getName() << "–ассто€ние: " << dist << '\n';
                if (t_list.size() != 0)
                {
                    airR->print_listRegPart(t_list);
                }

                airR->print_list();
            }
            break;
            case Type_race::ground_air:
            {
                idType = 3;
                if (race == nullptr)
                {
                    race = new Race;
                }
                cout << race->getName() << "–ассто€ние: " << dist << '\n';
                if (t_list.size() != 0)
                {
                    race->print_listRegPart(t_list);
                }

                race->print_list();
            }
            break;
            default:
                break;
            }

            cout << "¬ыберите транспорт или 0 дл€ окончани€ процесса регистрации: ";
            cin >> opt;

            cout << '\n';
            participant = static_cast<Participant>(opt);

            switch (participant)
            {
            case Participant::EndReg:
            {
            }
            break;
            // Ќаземный транспорт
            case Participant::Camel:
            {
                if (idType == 1 || idType == 3)
                {
                    if (camel == nullptr)
                    {
                        camel = new TransportMeans(dist, participant);
                        t_list.push_back(camel);
                        exist = 0;
                        groundR->print_regPart(camel, exist);
                    }
                    else
                    {
                        exist = 1;
                        groundR->print_regPart(camel, exist);
                    }
                }
                else
                {
                    cout << "ѕопытка зарегистрировать неправильный тип транспортного средства!\n\n";
                }
            }
            break;
            case Participant::CamelHS:
            {
                if (idType == 1 || idType == 3)
                {
                    if (camelHS == nullptr)
                    {
                        camelHS = new TransportMeans(dist, participant);
                        t_list.push_back(camelHS);
                        exist = 0;
                        groundR->print_regPart(camelHS, exist);
                    }
                    else
                    {
                        exist = 1;
                        groundR->print_regPart(camelHS, exist);
                    }
                }
                else
                {
                    cout << "ѕопытка зарегистрировать неправильный тип транспортного средства!\n\n";
                }
            }
            break;
            case Participant::Centaur:
            {
                if (idType == 1 || idType == 3)
                {
                    if (centaur == nullptr)
                    {
                        centaur = new TransportMeans(dist, participant);
                        t_list.push_back(centaur);
                        exist = 0;
                        groundR->print_regPart(centaur, exist);
                    }
                    else
                    {
                        exist = 1;
                        groundR->print_regPart(centaur, exist);
                    }
                }
                else
                {
                    cout << "ѕопытка зарегистрировать неправильный тип транспортного средства!\n\n";
                }
            }
            break;
            case Participant::BootsAT:
            {
                if (idType == 1 || idType == 3)
                {
                    if (boots == nullptr)
                    {
                        boots = new TransportMeans(dist, participant);
                        t_list.push_back(boots);
                        exist = 0;
                        groundR->print_regPart(boots, exist);
                    }
                    else
                    {
                        exist = 1;
                        groundR->print_regPart(boots, exist);
                    }
                }
                else
                {
                    cout << "ѕопытка зарегистрировать неправильный тип транспортного средства!\n\n";
                }
            }
            break;

            // ¬оздушный транспорт
            case Participant::Eagle:
            {
                if (idType == 2 || idType == 3)
                {
                    if (eagle == nullptr)
                    {
                        eagle = new TransportMeans(dist, participant);
                        t_list.push_back(eagle);
                        exist = 0;
                        airR->print_regPart(eagle, exist);
                    }
                    else
                    {
                        exist = 1;
                        airR->print_regPart(eagle, exist);
                    }
                }
                else
                {
                    cout << "ѕопытка зарегистрировать неправильный тип транспортного средства!\n\n";
                }
            }
            break;
            case Participant::Broom:
            {
                if (idType == 2 || idType == 3)
                {
                    if (broom == nullptr)
                    {
                        broom = new TransportMeans(dist, participant);
                        t_list.push_back(broom);
                        exist = 0;
                        airR->print_regPart(broom, exist);
                    }
                    else
                    {
                        exist = 1;
                        airR->print_regPart(broom, exist);
                    }
                }
                else
                {
                    cout << "ѕопытка зарегистрировать неправильный тип транспортного средства!\n\n";
                }
            }
            break;
            case Participant::MagicCarpet:
            {
                if (idType == 2 || idType == 3)
                {
                    if (carpet == nullptr)
                    {
                        carpet = new TransportMeans(dist, participant);
                        t_list.push_back(carpet);
                        exist = 0;
                        airR->print_regPart(carpet, exist);
                    }
                    else
                    {
                        exist = 1;
                        airR->print_regPart(carpet, exist);
                    }
                }
                else
                {
                    cout << "ѕопытка зарегистрировать неправильный тип транспортного средства!\n\n";
                }
            }
            break;

            default:
            {
                cout << "ѕопытка зарегистрировать неправильный тип транспортного средства!\n\n";
            }
            break;
            }
        }
    }
    opt = 11;
    
    return t_list;
}
