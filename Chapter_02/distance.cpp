#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    constexpr double earth_radius_km = 6371.0;
    constexpr double degrees_to_radians = 3.14159265358979323846 / 180.0;

    // Approximate coordinates in degrees.
    constexpr double makerere_latitude = 0.3353;
    constexpr double makerere_longitude = 32.5680;
    constexpr double entebbe_latitude = 0.0420;
    constexpr double entebbe_longitude = 32.4435;

    const double latitude_difference =
        (entebbe_latitude - makerere_latitude) * degrees_to_radians;
    const double longitude_difference =
        (entebbe_longitude - makerere_longitude) * degrees_to_radians;

    const double makerere_latitude_radians = makerere_latitude * degrees_to_radians;
    const double entebbe_latitude_radians = entebbe_latitude * degrees_to_radians;
    const double haversine =
        std::sin(latitude_difference / 2) * std::sin(latitude_difference / 2) +
        std::cos(makerere_latitude_radians) *
            std::cos(entebbe_latitude_radians) *
            std::sin(longitude_difference / 2) *
            std::sin(longitude_difference / 2);
    const double central_angle = 2 * std::atan2(std::sqrt(haversine),
                                                 std::sqrt(1 - haversine));
    const double distance = earth_radius_km * central_angle;

    std::cout << std::fixed << std::setprecision(2)
              << "The distance from Makerere University Freedom Square to "
              << "Entebbe Airport is approximately " << distance << " km.\n";

    return 0;
}