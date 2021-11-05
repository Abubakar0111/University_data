#include <iostream>

using namespace std;
class Graphics
{
    string Choose;

public:
    Graphics()
    {
        Choose = "+-+ +-+-+-+-+ +-+-+-+\n"
                 "|1| |C|h|a|t| |B|o|t|\n"
                 "+-+ +-+-+-+-+ +-+-+-+\n\n"
                 "+-+ +-+-+-+-+ +-+-+ +-+-+-+-+-+ +-+-+\n"
                 "|2| |M|e|d|i|c|a|l| |c|h|e|c|k| |u|p|\n"
                 "+-+ +-+-+-+-+ +-+-+ +-+-+-+-+-+ +-+-+\n\n"
                 "+-+ +-+-+-+-+-+-+-+-+ +-+-+-+-+ + +-+-+\n"
                 "|3| |C|o|v|i|d|-|9|0| |c|h|e|c|k| |u|p|\n"
                 "+-+ +-+-+-+-+-+-+-+-+ +-+-+-+-+-+ +-+-+\n";
    }
    string Option()
    {
        return Choose;
    }
};

class IntialGraphics
{
    // string welcome1;
    // string welcome2;

public:
    void welcome1()
    {
        cout << "\t\t\t╔═╗┬ ┬┌─┐┬─┐┌┬┐┌─┐┌─┐┬ ┬ \n"
                "\t\t\t╠═╝├─┤├─┤├┬┘│││├─┤│  └┬┘ \n"
                "\t\t\t╩  ┴ ┴┴ ┴┴└─┴ ┴┴ ┴└─┘ ┴  \n\n";
    }
    void welcome2()
    {
        cout << "\t\t+---------------------------------------------------+\n"
                "\t\t|                                                   |\n"
                "\t\t|     ::::: Welcome to small Medical store :::::    |\n"
                "\t\t|                                                   |\n"
                "\t\t+---------------------------------------------------+\n\n";
    }
    void chatBotGraphics()
    {

        cout << "              cloc\n"
                "            cXWWWWK\n"
                "             cXWWWWX\n"
                "              kXXx\n"
                "     cddddddxddxx0XKOxdddddddddo:.\n"
                "   l0d;;;;;;;;;,;,,;;;;;;;;,;;;:xO;\n"
                "   0d.                          .Ox.\n"
                ".lokNd                           .kKdo:.\n"
                "d0coXd     .:dddl.    .lddd;     .k0co0:\n"
                "dk  Kd     .o:.;o,    ;d,.cl.    .kk  O:\n"
                "dk  Kd                           .kk  O:\n"
                "d0:lXd                           .k0:o0:\n"
                "odkNd        .:l:;;;;:l:.       .kXxdc.\n"
                "   ,0d        .,coddddoc'        .kx.\n"
                "   .kO,                         .:0o\n"
                "   .oxdddxdxxddddddddddxd:. .oddxc.\n"
                "       ....'.''.........''c0d.lNo..\n"
                "                         ,kkON:\n"
                "                          .oko.\n";
    }
};