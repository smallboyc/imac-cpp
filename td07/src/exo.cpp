#include <iostream>
#include <string>
#include <vector>

struct Position
{
    int x;
    int y;
};

enum class Direction
{
    Haut,
    Bas,
    Avant,
    Arriere
};

struct Move
{
    Direction direction;
    int distance;
};

void moveSubmarine(Position &position, Move &move)
{
    if (move.direction == Direction::Haut)
    {
        position.y += move.distance;
        std::cout << "Haut : " << move.distance << std::endl;
    }

    else if (move.direction == Direction::Bas)
    {
        position.y -= move.distance;
        std::cout << "Bas : " << move.distance << std::endl;
    }
    else if (move.direction == Direction::Avant)
    {
        position.x += move.distance;
        std::cout << "Avant : " << move.distance << std::endl;
    }

    else if (move.direction == Direction::Arriere)
    {
        position.x -= move.distance;
        std::cout << "Arriere : " << move.distance << std::endl;
    }
}

void display(Position &position)
{
    std::cout << "Position finale du sous-marin : " << std::endl;
    std::cout << " Position x : " << position.x << std::endl;
    std::cout << " Position y : " << position.y << std::endl;
}

int main()
{
    Position boat{0, 0};
    Direction direction{Direction::Haut};
    int direction_int{0};
    Move move{direction, 0};
    bool wannaMove{true};

    std::cout << "Yooo! bouge ton sous-marin ! " << std::endl;
    std::cout << std::endl;
    std::cout << "Positions initiales : " << std::endl;
    std::cout << "Position x : " << boat.x << std::endl;
    std::cout << "Position y : " << boat.y << std::endl;
    std::cout << std::endl;
    std::cout << "Effectuez un mouvement du sous-marin : " << std::endl;

    // METHODE 1 : avancée

    // while (wannaMove)
    // {
    //     std::cout << std::endl;
    //     std::cout << "Entrez une direction (0/ Haut - 1/Bas - 2/Avant - 3/Arriere) : " << std::endl;
    //     while (!(std::cin >> direction_int) || !(direction_int >= 0 && direction_int <= 3))
    //     {
    //         std::cin.clear();
    //         std::cin.ignore(255, '\n');
    //         std::cout << "Entrez une direction (0/ Haut - 1/Bas - 2/Avant - 3/Arriere) : " << std::endl;
    //     }

    //     move.direction = static_cast<Direction>(direction_int);

    //     std::cout << "Entrez une distance (int) : " << std::endl;
    //     std::cin >> move.distance;

    //     std::cout << std::endl;
    //     moveSubmarine(boat, move);
    //     std::cout << std::endl;

    //     std::cout << "Voulez-vous effectuer un autre mouvement ? (1/Oui - 0/Non) : ";
    //     while (!(std::cin >> wannaMove) || wannaMove != 0 && wannaMove != 1)
    //     {
    //         std::cin.clear();
    //         std::cin.ignore(255, '\n');
    //         std::cout << "Voulez-vous effectuer un autre mouvement ? (1/Oui - 0/Non) : ";
    //     }
    // }

    // std::cout << std::endl;

    // display(boat);

    // 2ème méthode : classique

    std::vector<Move> moves{
        {Direction::Avant, 10},
        {Direction::Bas, 5},
        {Direction::Arriere, 3},
        {Direction::Haut, 2},
        {Direction::Avant, 5},
        {Direction::Bas, 1},
        {Direction::Arriere, 2},
        {Direction::Avant, 3},
        {Direction::Bas, 1},
        {Direction::Haut, 3},
        {Direction::Avant, 1},
        {Direction::Bas, 5},
        {Direction::Arriere, 2},
        {Direction::Avant, 6}};

    for (int i{0}; i < moves.size(); i++)
    {
        moveSubmarine(boat, moves[i]);
        display(boat);
    }

    return 0;
}

// x = 18
// y = -7