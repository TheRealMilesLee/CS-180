unsigned get_rand_in_range(unsigned low, unsigned high)
{
    auto seed = static_cast<unsigned int>(time(nullptr));
    srand(seed);
    unsigned value = rand() % (high - low + 1) + low;
    return value;
}
