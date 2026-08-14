#include <vector>
#include "question.h"

std::vector<Question> getATA28Questions() {
    return {
        // ata 28
        {
            "What are the main characteristics of Jet A-1 turbine fuel regarding flash point and freezing point?",
            {"Flash point +38 deg C, freezing point -47 deg C.", "Flash point -20 deg C, freezing point -60 deg C.", "Flash point +65 deg C, freezing point -48 deg C."},
            "Flash point +38 deg C, freezing point -47 deg C.",
            "Jet A-1 is the most common civil turbine fuel in Europe. It has a high flash point of +38 deg C for safe handling and a low freezing point of -47 deg C. Its US equivalent is JP-1A.",
            "Remember that civil aviation standard fuels need a freezing point well below -40 deg C and safe ambient handling above +35 deg C."
        },
        {
            "Why is military Jet B fuel (JP-4) considered much more dangerous to handle than Jet A or Jet A-1?",
            {"It has an extremely low flash point of -20 deg C.", "It has a freezing point above 0 deg C.", "Its density is higher than 1.0 kg/L causing severe vapor locking."},
            "It has an extremely low flash point of -20 deg C.",
            "Jet B has an extremely low flash point of -20 deg C to provide excellent cold-weather ignition, which makes it highly volatile and requires extreme fire safety care during handling.",
            "Think about ignition capabilities at sub-zero ambient temperatures."
        },
        {
            "Which military turbine fuel is preferred on aircraft carriers due to its high flash point of +65 deg C?",
            {"JP-5", "Jet A", "JP-4"},
            "JP-5",
            "JP-5 is preferred on naval aircraft carriers because its exceptionally high flash point (+65 deg C) significantly minimizes the hazard of fire during storage and operations on board ships.",
            "Think of the specialized Navy fuel designed for shipboard safety."
        },
        {
            "What is the standard density of Jet A and Jet A-1 at a temperature of 15 deg C?",
            {"0.81 kg/ltr", "0.78 kg/ltr", "0.83 kg/ltr"},
            "0.81 kg/ltr",
            "Both Jet A and Jet A-1 have a standard density of 0.81 kg/ltr at 15 deg C. Jet B has a density of 0.78 kg/ltr, while JP-5 has a density of 0.83 kg/ltr.",
            "Civil kerosene fuels typically sit right around 0.8 kg per liter."
        },
        {
            "What structural components form the boundaries of a typical integral wing fuel tank?",
            {"Front spar, rear spar, upper wing skin, lower wing skin, and sealed wing ribs.", "Rigid internal aluminium drums fastened to the wing ribs.", "Detachable rubber bladder cells enclosed by non-structural fairings."},
            "Front spar, rear spar, upper wing skin, lower wing skin, and sealed wing ribs.",
            "Integral tanks use the aircraft structure itself as the tank walls: front and rear spars form the forward and aft walls, upper and lower wing skins form top and bottom, and sealed ribs form divider walls.",
            "Integral means the tank is an integrated part of the airframe structure to save weight."
        },
        {
            "What is the function of the knit aluminium gasket installed on a fuel tank access door?",
            {"It provides metal-to-metal contact to prevent electrostatic spark ignition.", "It acts as the primary fluid seal against high-pressure fuel leaks.", "It acts as a thermal barrier between cold fuel and the wing exterior."},
            "It provides metal-to-metal contact to prevent electrostatic spark ignition.",
            "The knit aluminium gasket ensures direct electrical conductivity between the access door and wing structure, dissipating static charges and preventing sparks.",
            "Think about static electrical discharge hazards."
        },
        {
            "Why must a fuel tank access panel installation always be leak tested by refueling after torquing?",
            {"To verify that the molded rubber seal and clamp ring properly seal under fuel contact.", "To calibrate the capacitive fuel quantity probes in that bay.", "To purge all remaining inert gas out of the access panel aperture."},
            "To verify that the molded rubber seal and clamp ring properly seal under fuel contact.",
            "Whenever an access panel is replaced and tightened using the specified torque sequence, the tank must be filled with fuel to check for leaks at the seal and fasteners.",
            "The integrity of rubber seals under hydrostatic fuel head must always be verified."
        },
        {
            "What is the basic design requirement regarding boost pump redundancy for each fuel consumer?",
            {"There must be two fuel boost pumps for every consumer.", "There is only one boost pump per engine backed up solely by ram air.", "All engines share a single centrally mounted boost pump."},
            "There must be two fuel boost pumps for every consumer.",
            "The system requires two fuel boost pumps for every consumer (engine/APU) so that if one pump fails, the backup pump maintains uninterrupted supply at takeoff thrust.",
            "Aviation fail-safe design always mandates at least dual redundancy for critical engine feed."
        },
        {
            "What is the purpose of the boost pump bypass suction port/valve?",
            {"It allows fuel to be delivered to the engine by gravity or suction if both boost pumps fail.", "It bypasses contaminated fuel directly into the vent surge tank.", "It vents excess booster pressure back into the refueling manifold."},
            "It allows fuel to be delivered to the engine by gravity or suction if both boost pumps fail.",
            "If both boost pumps in a tank fail, the bypass check valve opens, allowing the engine low-pressure engine-driven pump to draw fuel via suction or gravity feed.",
            "Consider how an engine gets fuel when electrical booster power is lost in flight."
        },
        {
            "How do sequence valves achieve priority fuel feeding from the center tank over wing tanks?",
            {"They bleed wing boost pump output back into the wing tank to reduce wing feed pressure.", "They mechanically lock the wing crossfeed valves in the closed position.", "They cut off electrical power to the wing boost pumps when center tank fuel is sensed."},
            "They bleed wing boost pump output back into the wing tank to reduce wing feed pressure.",
            "Sequence valves are pressure-relief valves at the wing boost pump outlets that dump some fuel back to the tank, lowering wing line pressure so higher-pressure center tank pumps dominate.",
            "Think about pressure difference: the higher delivery pressure overrides the lower delivery pressure."
        },
        {
            "Why are override and jettison pumps designed with higher output pressure than standard boost pumps?",
            {"Their high pressure forces discharge check valves on standard pumps closed, ensuring center tank fuel is consumed first.", "To atomize fuel before it reaches the low-pressure engine shut-off valve.", "To allow single-phase electrical operation on battery power."},
            "Their high pressure forces discharge check valves on standard pumps closed, ensuring center tank fuel is consumed first.",
            "Override pumps deliver approximately twice the delivery pressure of standard pumps, closing the standard pumps' discharge check valves and ensuring priority tank depletion.",
            "Higher pressure automatically holds the opposing check valves seated."
        },
        {
            "Under what flight configuration does electrical fuel feed management typically switch from taxi feed to takeoff feed?",
            {"When the wing flaps are extended before takeoff.", "When the landing gear is retracted after liftoff.", "When the engine master switches are set to CRUISE."},
            "When the wing flaps are extended before takeoff.",
            "The transition from taxi feed (center tank supplying all engines) to takeoff feed (dedicated main and center pump supply) occurs automatically when wing flaps are extended.",
            "Look for the flight control surface change that signals preparation for departure."
        },
        {
            "When does in-flight fuel transfer between wing tanks normally occur?",
            {"Only from reserve tanks to inner main tanks in equal amounts simultaneously on both wings.", "Freely between left and right outer tanks whenever one engine fails.", "Continuously from inner wing tanks into the outer reserve tanks during cruise."},
            "Only from reserve tanks to inner main tanks in equal amounts simultaneously on both wings.",
            "To prevent lateral imbalance and preserve safe handling, in-flight wing transfer is strictly limited to symmetrical transfer from outer reserve tanks to inner main tanks.",
            "Think about maintaining lateral balance across both wing tips."
        },
        {
            "What is the maximum typical nominal pressure used during commercial aircraft pressure refueling?",
            {"Approximately 50 psi.", "Approximately 150 psi.", "Approximately 10 psi."},
            "Approximately 50 psi.",
            "Commercial pressure refueling systems are designed to connect via standardized couplings and accept fuel delivered at approximately 50 psi.",
            "Consider standard airport hydrants and pressure-refuel truck delivery pressure."
        },
        {
            "Why is gravity (overwing) refueling rarely used on large commercial transport aircraft?",
            {"It is extremely slow, risks structural contamination/spills, and cannot access center/trim tanks directly.", "It requires electrical ground handling bus power to open the overwing ports.", "It overpressurizes the wing tank vent surge boxes."},
            "It is extremely slow, risks structural contamination/spills, and cannot access center/trim tanks directly.",
            "Gravity refueling a large jet can take days, exposes open tanks to debris/weather, poses skin scratch and spill hazards, and cannot fill center or stabilizer tanks lacking filler caps.",
            "Consider turn-around time and open-port environmental exposure."
        },
        {
            "Why must an aircraft touch down with fuel in the wing tanks rather than a full center tank with empty wings?",
            {"Wing fuel weight creates an upward relief bending moment that counteracts landing fuselage impact loads.", "Center tank fuel would freeze instantly upon runway contact.", "Wing boost pumps cannot start if the landing gear struts compress."},
            "Wing fuel weight creates an upward relief bending moment that counteracts landing fuselage impact loads.",
            "Fuel weight in the wings counteracts fuselage inertia and relieves upward wing bending stress at touch down. A heavy fuselage with empty wings causes maximum structural bending stress.",
            "Think about wing bending relief."
        },
        {
            "What is the purpose of manifold drain valves installed at the low points of the refueling manifold?",
            {"They drain fuel out of the manifold into wing tanks to prevent bending fatigue and cracks.", "They vent trapped air directly into the cargo compartment during defueling.", "They supply pressurized fuel to the APU during engine cross-bleed starting."},
            "They drain fuel out of the manifold into wing tanks to prevent bending fatigue and cracks.",
            "When center tanks empty in flight, a fuel-filled manifold would sag and vibrate with turbulence, leading to metal fatigue and rupture. Drain valves empty it into the wing tanks.",
            "Consider what dynamic vibration and fuel weight inside an empty tank span can do."
        },
        {
            "What is the main function of fuel diffusers (tank distribution manifolds) inside the fuel tanks?",
            {"They soften the 50 psi incoming fuel jet to prevent internal structural damage and reduce foaming.", "They heat the fuel using hot hydraulic return fluid.", "They separate water droplets from fuel as it enters the tank."},
            "They soften the 50 psi incoming fuel jet to prevent internal structural damage and reduce foaming.",
            "Diffusers and distribution manifolds use perforated tubes and baffles to dissipate fuel jet kinetic energy at 50 psi, preventing damage to tank sensors and minimizing foaming.",
            "Diffusers reduce fluid velocity and disperse flow gently."
        },
        {
            "What component interconnects the fuel feed manifold with the refueling manifold during pressure defueling?",
            {"The defuel transfer valve (or manual defueling valve).", "The volumetric top-off sensor.", "The crossfeed air release valve."},
            "The defuel transfer valve (or manual defueling valve).",
            "The defuel transfer valve bridges the engine feed manifold and the refuel manifold, directing boost pump output out through the fueling coupling into the fuel truck.",
            "Look for the valve that connects feed to refuel manifold."
        },
        {
            "What is the typical suction pressure applied by a fuel tanker during suction defueling?",
            {"10 to 15 psi suction.", "50 to 75 psi suction.", "0.5 to 1.0 psi suction."},
            "10 to 15 psi suction.",
            "Suction defueling uses external truck suction of approximately 10 to 15 psi to draw fuel through the boost pump bypass valves when aircraft boost pumps are off.",
            "Suction levels must be modest to prevent collapsing lines and tank structures."
        },
        {
            "How does a capacitive fuel quantity probe measure fuel level in a tank?",
            {"By detecting capacitance changes as fuel (dielectric constant ~2.2) replaces air (constant 1.0) between two coaxial tubes.", "By using an acoustic sonar pulse reflected off the fuel upper surface.", "By measuring the electrical resistance of the fuel between the wing skins."},
            "By detecting capacitance changes as fuel (dielectric constant ~2.2) replaces air (constant 1.0) between two coaxial tubes.",
            "A probe consists of two coaxial aluminium tubes. As the fuel level rises, fuel (dielectric constant approx. 2.2) displaces air (constant 1.0), increasing measured capacitance.",
            "Capacitance depends directly on the dielectric constant of the medium between capacitor plates."
        },
        {
            "What is the primary role of a fuel compensator sensor located at the lowest part of the tank?",
            {"It measures changes in the fuel dielectric constant caused by temperature and fuel grade.", "It prevents fuel flow from reversing through the boost pump inlet.", "It heats the fuel probe tubes to prevent ice crystallization."},
            "It measures changes in the fuel dielectric constant caused by temperature and fuel grade.",
            "The compensator is always completely submerged in fuel. Its capacitance changes only when fuel dielectric properties change with temperature and fuel brand, providing correction data.",
            "Because it is always fully submerged, it ignores fuel height and only measures fuel property changes."
        },
        {
            "What is the combined densitometer and compensator unit called on Airbus aircraft?",
            {"Cadensicon", "Densitrim", "Capacitor Unit 28"},
            "Cadensicon",
            "On Airbus aircraft, the sensor combining both the compensator (dielectric constant) and densitometer (density measurement) into a single submerged unit is known as the cadensicon.",
            "It blends capacitance, density, and sensor into one coined word."
        },
        {
            "How does a thermistor-type fuel level sensor detect the presence of fuel?",
            {"Its electrical resistance drops as fuel cools the heated thermistor due to fuel higher thermal conductivity.", "Its internal reed switch closes when a magnetic float moves past.", "Its capacitive reactance doubles when submerged in liquid."},
            "Its electrical resistance drops as fuel cools the heated thermistor due to fuel higher thermal conductivity.",
            "When submerged in fuel, heat dissipates faster because fuel has higher thermal conductivity than air. The lower temperature results in lower thermistor resistance.",
            "Think of thermal dissipation: liquid conducts heat away much better than air."
        },
        {
            "Why can the fuel temperature bulb on modern Boeing aircraft be removed without draining the fuel tank?",
            {"It is housed in a dry adapter well assembly that stays sealed in the tank.", "The temperature bulb is installed on the outside of the dry cabin pressure bulkhead.", "A spring-loaded flapper seal snaps over the hole when the bulb is unscrewed."},
            "It is housed in a dry adapter well assembly that stays sealed in the tank.",
            "The PTC temperature bulb mounts into an adapter well assembly permanently sealed in the rear spar, allowing maintenance replacement without draining fuel.",
            "Look for the protective well/adapter design commonly used in avionics probe installations."
        },
        {
            "What is the key advantage of manual magnetic level indicators over traditional drip sticks?",
            {"They measure fuel level accurately without releasing any fuel drips or fumes.", "They calculate mass and density automatically without requiring conversion tables.", "They are powered directly by the ground handling bus without battery drain."},
            "They measure fuel level accurately without releasing any fuel drips or fumes.",
            "Magnetic indicators have a sealed tube and a magnetic float. When the internal stick's magnet engages the float magnet, level is read without any fuel dripping onto personnel.",
            "Magnetic coupling means the tube remains completely sealed."
        },
        {
            "What is the distinction between a direct drain valve and an indirect drain valve?",
            {"A direct drain valve is located at the lowest point, while an indirect valve connects via a line to the lowest point.", "A direct drain valve drains water, while an indirect valve drains only kerosene.", "A direct drain valve is electrically commanded, while an indirect valve is manual."},
            "A direct drain valve is located at the lowest point, while an indirect valve connects via a line to the lowest point.",
            "Direct drain valves mount right at the bottom skin lowest point. Indirect valves are located elsewhere due to clearance/structure and use a siphon tube running to the sump.",
            "Consider physical placement versus connecting lines."
        },
        {
            "How does ram air entering the fuel tank vent system assist the fuel system during high-altitude cruise?",
            {"It creates a slight positive pressure on the fuel surface to reduce the tendency of fuel to vaporize.", "It cools the fuel below -40 deg C to maintain optimal pump lubrication.", "It drives the Air Separation Module without requiring bleed air."},
            "It creates a slight positive pressure on the fuel surface to reduce the tendency of fuel to vaporize.",
            "Ram air enters via NACA scoops into vent surge tanks, establishing a small positive pressure head in the tanks that suppresses fuel boiling/vaporization in low ambient air pressure.",
            "Positive surface pressure suppresses fluid vaporization."
        },
        {
            "Why does a fuel jettison system deliberately prevent dumping all fuel from the tanks during flight?",
            {"To guarantee a minimum reserve quantity is retained to reach an alternate landing field safely.", "To prevent structural flutter caused by an empty wing box structure.", "To keep the fuel-oil heat exchangers from overheating."},
            "To guarantee a minimum reserve quantity is retained to reach an alternate landing field safely.",
            "Jettison systems use standpipes or isolated main tank feeds so fuel dumping automatically ceases above a minimum threshold, ensuring the aircraft can land safely.",
            "Aircraft safety rules ensure an airplane cannot dump itself into dry tanks."
        },
        {
            "What gas does an Inert Gas Generation System (IGGS) produce to inert aircraft fuel tank ullage spaces?",
            {"Nitrogen Enriched Air (NEA)", "Pure carbon dioxide (CO2)", "Halon 1301 vapor"},
            "Nitrogen Enriched Air (NEA)",
            "The IGGS uses Air Separation Modules to strip oxygen from conditioned bleed air, exhausting Oxygen Enriched Air (OEA) overboard and feeding Nitrogen Enriched Air (NEA) into tanks.",
            "The main non-combustible component separated from atmospheric air is nitrogen."
        },
        {
            "In an Airbus A350 IGGS Air Separation Module (ASM), how is oxygen separated from the inlet air stream?",
            {"OEA permeates through hollow fiber membranes radially and exhausts overboard, while NEA passes axially.", "OEA condenses into liquid form while NEA remains gaseous.", "OEA is absorbed by activated charcoal canisters while NEA passes straight through."},
            "OEA permeates through hollow fiber membranes radially and exhausts overboard, while NEA passes axially.",
            "Pressurized air enters hollow fiber membranes: oxygen permeates radially through the membrane walls and is dumped overboard (OEA), while nitrogen passes axially out the end (NEA).",
            "Fiber membrane separation works via differential radial diffusion across hollow filaments."
        },
        {
            "What is the primary aerodynamic benefit of maintaining an aft Center of Gravity (CG) via a trim tank system?",
            {"It reduces downward horizontal stabilizer trim force, decreasing overall aircraft trim drag and fuel burn.", "It increases maximum engine thrust output at high altitudes.", "It prevents wing tip stalling during supersonic cruise."},
            "It reduces downward horizontal stabilizer trim force, decreasing overall aircraft trim drag and fuel burn.",
            "Moving fuel to the horizontal stabilizer shifts the CG aft, reducing the required downward aerodynamic tail load. This lowers total required wing lift and significantly decreases drag.",
            "Less downward tail force means the wing needs to produce less total lift to support the aircraft."
        },
        {
            "Where is the aircraft target center of gravity normally set relative to the certified aft CG limit?",
            {"Approximately 2% forward of the certified aft limit.", "Exactly at the certified aft limit.", "5% aft of the certified aft limit."},
            "Approximately 2% forward of the certified aft limit.",
            "For safety margins, the fuel control computer targets a CG location approximately 2% forward of the aircraft's certified aft limit, preventing loss of longitudinal stability.",
            "Safety regulations always build in a small forward buffer from the absolute stability boundary."
        },
        {
            "When does the trim tank system automatically transfer all remaining trim fuel forward during descent?",
            {"When descending below a specified flight level or approximately 75 minutes before landing.", "Immediately when the landing gear is extended on final approach.", "Only after touchdown when the wheel weight-on-wheels switches engage."},
            "When descending below a specified flight level or approximately 75 minutes before landing.",
            "To ensure a safe, stable forward CG for approach and landing, all fuel remaining in the horizontal stabilizer trim tank is pumped forward to the center/main tanks ~75 min before landing.",
            "Forward transfer occurs well before the descent/approach phase to guarantee landing stability."
        },
        {
            "Why is refueling prohibited while oxygen bottle maintenance or charging is taking place nearby?",
            {"Enriched oxygen environment drastically increases fire and explosive ignition hazard with fuel vapors.", "Oxygen reacts chemically with kerosene to produce corrosive sludge.", "Oxygen service lines interfere with the fuel quantity capacitance probes."},
            "Enriched oxygen environment drastically increases fire and explosive ignition hazard with fuel vapors.",
            "Pure oxygen leaks combined with kerosene vapors create an extreme fire and explosion hazard, so fuel handling and oxygen servicing are strictly separated.",
            "Think of the fire triangle: high oxygen concentration lowers the energy required for combustion."
        },
        {
            "What personal protective equipment is required to prevent electrostatic spark discharge when entering a fuel tank?",
            {"100% cotton anti-static overalls and anti-static socks.", "Nylon flight jackets and rubber safety boots.", "Polyester cleanroom garments and wool fleece liners."},
            "100% cotton anti-static overalls and anti-static socks.",
            "Synthetic fabrics generate dangerous static electrical charges through friction. Personnel entering tanks must wear 100% pure cotton clothing and protective anti-static socks.",
            "Natural fibers like cotton do not accumulate high static surface charges."
        },
        {
            "According to fuel tank safety entry standards, what defines a Category 4 tank area?",
            {"An area with internal openings too narrow for rescue personnel without using mechanical cutters.", "An open wing tank accessible directly from above via an overwing port.", "A tank equipped with a wide rectangular access door large enough for a stretcher."},
            "An area with internal openings too narrow for rescue personnel without using mechanical cutters.",
            "A Category 4 tank area has internal structural openings so restricted that emergency extraction is impossible without cutting through the aircraft structure.",
            "Think of the most extreme structural confinement scenario where normal rescue cannot fit."
        },
        {
            "Why must a fuel truck always be bonded to the aircraft structure with a grounding lead before connecting the fuel hose?",
            {"To equalize electrical potential and eliminate static spark discharge during fueling.", "To provide 28V DC grounding for the refueling valve actuators.", "To calibrate the truck digital flow meter against the aircraft FQI computer."},
            "To equalize electrical potential and eliminate static spark discharge during fueling.",
            "High-velocity fuel flow generates severe static charges. Bonding the truck and aircraft equalizes electrostatic potential, preventing sparks when opening caps or connecting nozzles.",
            "Equalizing potential prevents sparks."
        },
        {
            "What two functional tests must be carried out on the refueling control panel prior to commencing automatic refueling?",
            {"Fuel quantity indicator test and high-level shut-off test.", "Boost pump pressure test and suction defuel valve test.", "Jettison nozzle test and crossfeed isolation test."},
            "Fuel quantity indicator test and high-level shut-off test.",
            "Before pressure refueling, the technician must test the quantity indication system to ensure valid readings and test the high-level sensors to guarantee automatic overfill protection.",
            "You must verify both quantity display accuracy and overfill shut-off protection."
        },
        {
            "How is crossfeed valve malfunction indicated on modern glass cockpit electronic fuel pages?",
            {"The valve symbol is displayed in amber if its actual position disagrees with the commanded state.", "The valve symbol flashes green continuously.", "The pump discharge check valve illuminates red."},
            "The valve symbol is displayed in amber if its actual position disagrees with the commanded state.",
            "On ECAM/EICAS displays, fuel valves in transit are shown diagonally, open/closed inline in green/white, and turn amber whenever a transit failure or disagreement occurs.",
            "Amber is the standard cockpit caution color for system disagreement or abnormal state."
        }
    };
}