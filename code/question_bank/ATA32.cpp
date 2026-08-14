#include <vector>
#include "question.h"

std::vector<Question> getATA32Questions() {
    return {
        // ata 32
        {
            "Why do all jet aircraft use a nose wheel landing gear configuration instead of a tail wheel configuration?",
            {"Because a nose wheel landing gear creates a returning moment around the center of gravity on landing, preventing a ground loop.", "Because tail wheels create too much aerodynamic drag during flight.", "Because tail wheel landing gear cannot support aircraft heavier than 10,000 kg."},
            "Because a nose wheel landing gear creates a returning moment around the center of gravity on landing, preventing a ground loop.",
            "On aircraft with a nose wheel landing gear, the center of gravity is in front of the main wheels and wheel friction, creating a returning moment that stabilizes the aircraft. Tail wheel aircraft have the CG aft of main wheels, creating an unstable break out moment.",
            "Consider where the center of gravity is relative to the main wheels and how friction forces act during landing."
        },
        {
            "What are the three factors that increase the break out moment on a tail wheel landing gear aircraft?",
            {"Higher aircraft speeds, center of gravity further behind the main gears, and closer spacing between main landing gears.", "Lower aircraft speeds, lighter fuselage weight, and wider main gear track.", "Higher tire pressure, longer runway length, and higher angle of attack."},
            "Higher aircraft speeds, center of gravity further behind the main gears, and closer spacing between main landing gears.",
            "The break out moment is influenced by three factors: it is greater at higher aircraft speeds, the further the center of gravity is behind the main gears, and the closer the main landing gears are to each other.",
            "Think about speed, distance from CG to main gear, and the track width of the main gear."
        },
        {
            "What is the main aerodynamic advantage of nose wheel landing gear over tail wheel gear after touchdown?",
            {"A greater decrease of lift after touchdown because the angle of attack is near 0 degrees.", "An increase in parasite drag to assist aerodynamic braking.", "A higher angle of attack that creates maximum induced drag."},
            "A greater decrease of lift after touchdown because the angle of attack is near 0 degrees.",
            "On touchdown, an aircraft with nose wheel landing gear has an angle of attack near 0 degrees, resulting in a greater and quicker decrease in lift compared to a tail wheel aircraft.",
            "Look at the aircraft fuselage attitude relative to the runway upon touchdown."
        },
        {
            "Why are multiple wheels used on each main landing gear of large, heavy aircraft?",
            {"To spread the main wheel loading over a greater area and allow operation on more runways.", "To increase the rolling resistance during taxiing.", "To eliminate the need for hydraulic braking on the wheels."},
            "To spread the main wheel loading over a greater area and allow operation on more runways.",
            "High main wheel loading restricts the types of runway surfaces an aircraft can use. Spreading the load across multiple wheels reduces pavement stress, provides redundancy, and eases stowage.",
            "Consider how aircraft weight affects airport runway pavement limitations."
        },
        {
            "What is the primary function of the torsion links (torque links) on a landing gear shock strut?",
            {"To allow the inner cylinder to move up and down while preventing it from rotating within the outer cylinder.", "To compress nitrogen gas during heavy landing impacts.", "To lock the landing gear automatically in the retracted position."},
            "To allow the inner cylinder to move up and down while preventing it from rotating within the outer cylinder.",
            "Torsion links connect the outer cylinder to the inner cylinder (or axle), permitting vertical telescopic movement for shock absorption while maintaining correct wheel alignment by preventing rotation.",
            "Think about what stops the wheel assembly from twisting freely relative to the strut housing."
        },
        {
            "What causes wheel shimmy and how is it counteracted in modern landing gear assemblies?",
            {"It is caused by uneven tire pressure, wear, or runway surfaces, and is counteracted by a shimmy damper or torsion link damper.", "It is caused by high hydraulic return line backpressure and is counteracted by a priority valve.", "It is caused by aerodynamic flutter and is counteracted by vortex generators on gear doors."},
            "It is caused by uneven tire pressure, wear, or runway surfaces, and is counteracted by a shimmy damper or torsion link damper.",
            "Wheel shimmy is the rapid oscillation of the wheel to the left and right of the direction of travel. A hydraulic torsion link damper (shimmy damper) dampens these oscillations.",
            "Look at the damper attached across the torsion link apex bolt."
        },
        {
            "What fluids/gases are used inside a typical landing gear oleo-pneumatic shock strut for suspension and dampening?",
            {"Dry nitrogen gas for suspension (spring) and mineral hydraulic oil for dampening.", "Compressed atmospheric air for suspension and synthetic ester oil for lubrication.", "High-pressure helium gas for dampening and silicone fluid for spring action."},
            "Dry nitrogen gas for suspension (spring) and mineral hydraulic oil for dampening.",
            "The shock strut uses dry nitrogen gas as a compressible spring to absorb landing impact and red mineral oil forced through orifices/valves for kinetic energy dissipation and dampening.",
            "One component acts as a compressible gas spring while the liquid provides viscous damping."
        },
        {
            "What happens during shock strut recoil to prevent the aircraft from bouncing violently into the air?",
            {"Check valves or recoil valves close, leaving only a limited passage for oil to transfer back.", "Hydraulic fluid is dumped immediately into the return reservoir.", "The uplock hook engages to mechanically arrest strut extension."},
            "Check valves or recoil valves close, leaving only a limited passage for oil to transfer back.",
            "When the strut extends after compression, recoil/check valves close, restricting the rate of fluid flow back to the gas chamber and controlling the dissipation of stored energy.",
            "Think about restricting fluid flow in the reverse direction after impact."
        },
        {
            "Why must the truck beams (bogie beams) on a Boeing 747 wing gear be tilted before retraction?",
            {"To allow the gear assembly and wheels to fit into the limited space of the wheel well.", "To cool down the brake assemblies through forced airflow exposure.", "To align the tires with the direction of relative flight airflow."},
            "To allow the gear assembly and wheels to fit into the limited space of the wheel well.",
            "Space in the wheel well is tightly constrained. The truck positioning actuator tilts the truck beam so that the four-wheel bogie clears the structure during retraction.",
            "Consider the geometric envelope available inside the fuselage/wing root bay."
        },
        {
            "How is the landing gear kept locked in the extended position against flight loads without relying solely on continuous hydraulic pressure?",
            {"The lock strut is held in an overcentered position by mechanical downlock springs.", "A continuous 3,000 psi hydraulic pressure is constantly supplied to the extend chamber.", "A spring-loaded solenoid pin directly engages into the wheel rim."},
            "The lock strut is held in an overcentered position by mechanical downlock springs.",
            "The downlock mechanism uses geometry (an overcentered lock strut) maintained by downlock springs so that structural forces cannot collapse the gear even if hydraulic power is lost.",
            "Consider what mechanical principle uses geometric alignment past center plus spring force."
        },
        {
            "What safety device is inserted on the ground to prevent accidental landing gear retraction during maintenance?",
            {"A ground lock pin inserted into the lock strut / lockstay pin hole.", "A hydraulic shutoff collar placed on the tire valve stem.", "A manual clamp fastened across the brake rotor drive blocks."},
            "A ground lock pin inserted into the lock strut / lockstay pin hole.",
            "Ground lock safety pins are inserted into designated holes in the lock strut / lockstay linkage to physically prevent overcenter collapse and accidental retraction on ground.",
            "Look for the bright red 'Remove Before Flight' pins installed in the gear linkages."
        },
        {
            "What is the function of the uplock actuator during normal landing gear extension?",
            {"It receives hydraulic pressure to open the uplock hook before the gear extends.", "It maintains continuous locking force during the entire extension sequence.", "It drives the uplock roller into engagement with the door frame."},
            "It receives hydraulic pressure to open the uplock hook before the gear extends.",
            "During extension, the uplock actuator receives hydraulic pressure to release the spring-loaded uplock hook. During retraction, the hook is mechanically pushed closed by a roller without actuator pressure.",
            "Think about what must release the hook holding the gear up before gravity/actuation can lower it."
        },
        {
            "Why does the nose landing gear on jet aircraft always retract forward into the fuselage?",
            {"So that aerodynamic airstream and gravity assist free-fall extension if hydraulic power fails.", "To keep the center of gravity as far aft as possible during cruise.", "To allow cabin ram air to cool the front brake assemblies."},
            "So that aerodynamic airstream and gravity assist free-fall extension if hydraulic power fails.",
            "Forward-retracting nose gear extends in the same direction as the oncoming airflow, allowing gravity and aerodynamic drag to push and lock the gear down during emergency extension.",
            "Think about which direction relative wind pushes the gear strut when it drops."
        },
        {
            "How is the nose landing gear held straight and centered before entering the wheel well during retraction?",
            {"Internal centering cams inside the shock strut engage when the strut extends fully after takeoff.", "The rudder pedals are mechanically locked in neutral by the pilot.", "Electric centering motors drive the steering collar to 0 degrees."},
            "Internal centering cams inside the shock strut engage when the strut extends fully after takeoff.",
            "When the aircraft leaves the ground and the shock strut extends to full stroke, mating internal upper and lower centering cams align the inner cylinder to the exact forward position.",
            "Look at the cam profile inside the upper and lower shock strut cylinders."
        },
        {
            "What is the purpose of the safety valve (airspeed cutoff valve) in the Airbus A320 landing gear hydraulic system?",
            {"It automatically blocks hydraulic supply to the gear system above ~260 kts (250 kts) to prevent high-speed extension damage.", "It relieves overpressure in the reservoir when hydraulic temperature exceeds 100°C.", "It vents brake hydraulic fluid overboard in the event of an engine fire."},
            "It automatically blocks hydraulic supply to the gear system above ~260 kts (250 kts) to prevent high-speed extension damage.",
            "At high airspeeds, extending gear doors or gear could cause structural damage. The safety valve cuts off hydraulic power to the selector valves above a predetermined airspeed threshold.",
            "Consider what protects the gear doors and linkages from excessive dynamic air pressure loads."
        },
        {
            "In a mechanical sequence valve landing gear system, what ensures the landing gear doors do not close before the gear is fully retracted?",
            {"The uplock operated door sequence valve is only repositioned after the uplock hook engages.", "A timer relay in the cockpit delays door closure by 15 seconds.", "The pilot manually toggles a secondary door selector handle."},
            "The uplock operated door sequence valve is only repositioned after the uplock hook engages.",
            "Sequence valves are mechanically actuated by the motion of the gear and uplock hook, ensuring hydraulic pressure is only ported to the door close side once the gear is safely latched.",
            "Look for the physical feedback link between the uplock mechanism and the door sequence valve."
        },
        {
            "How are modern aircraft wheel assemblies constructed to allow stiff, high-pressure tire installation?",
            {"They are split into two halves (inboard and outboard) held together by high-strength tie bolts.", "They use a single-piece drop-center rim where tires are levered over the rim lip.", "They are made of flexible polyurethane that shrinks onto the axle hub."},
            "They are split into two halves (inboard and outboard) held together by high-strength tie bolts.",
            "Aircraft tire beads are extremely stiff and cannot be stretched over a solid one-piece rim. Modern wheels are made of forged aluminum halves joined by tie bolts with an O-ring seal.",
            "Think about why you cannot lever a rigid 30-ply aircraft tire over a conventional car rim."
        },
        {
            "What is the purpose of fusible plugs (thermal relief plugs) in aircraft main wheel assemblies?",
            {"To safely deflate the tire before excessive heat from heavy braking causes explosive tire blowout.", "To inject nitrogen into hot brake disks to extinguish wheel fires.", "To provide a visual wear indication for the rotating brake disc drive keys."},
            "To safely deflate the tire before excessive heat from heavy braking causes explosive tire blowout.",
            "Fusible plugs contain a low-melting-point eutectic alloy core (melting at approx. 180°C or 300°C depending on location). Excessive heat melts the core, allowing controlled tire deflation.",
            "Consider the danger of high tire pressure combined with extreme brake heat after a rejected takeoff."
        },
        {
            "What are the two liquid penetrant non-destructive testing methods commonly used to inspect wheel rims for fatigue cracks?",
            {"Zyglo check (fluorescent penetrant with UV light) and dye penetrant check (visible red dye).", "Eddy current scanning and gamma radiography.", "Ultrasonic echo pulse and magnetic particle inspection."},
            "Zyglo check (fluorescent penetrant with UV light) and dye penetrant check (visible red dye).",
            "Liquid penetrant inspection includes Zyglo (fluorescent penetrant viewed under ultraviolet/black light) and red dye penetrant with white developer to highlight surface cracks.",
            "One uses a fluorescent liquid glowing under UV light, and the other uses contrasting red dye."
        },
        {
            "What are the main advantages of carbon brake heat packs over traditional steel brake heat packs?",
            {"They weigh about one-third as much, have lower wear rates, and withstand higher temperatures (up to 2500-3000°C).", "They are cheaper to manufacture and do not require hydraulic actuation.", "They produce zero heat during braking and eliminate the need for thermal relief plugs."},
            "They weigh about one-third as much, have lower wear rates, and withstand higher temperatures (up to 2500-3000°C).",
            "Carbon brakes provide massive weight savings, superior thermal endurance during maximum energy stops (RTO), longer service life, and can be recycled into new disks.",
            "Consider weight savings, heat tolerance during emergency stops, and wear characteristics."
        },
        {
            "How is the overall wear of a multi-disc brake heat pack checked during a pre-flight inspection?",
            {"By checking the protrusion of the wear indicator pin relative to its bracket while the parking brake is set.", "By measuring the diameter of the wheel rim with a vernier caliper.", "By reading the hydraulic return line pressure gauge on the refuel panel."},
            "By checking the protrusion of the wear indicator pin relative to its bracket while the parking brake is set.",
            "Wear indicator pins attached to the brake pressure plate extend through the housing. When the parking brake is applied, the pin length protruding past the guide indicates remaining friction material.",
            "Look for the small metal pin extending near the brake housing when pressure is applied."
        },
        {
            "What is the function of the automatic adjusters (return springs & friction rods / deformable tubes) in a brake piston assembly?",
            {"To maintain a constant running clearance (play) and compensate for disc wear as linings erode.", "To increase brake fluid pressure proportionally to aircraft landing weight.", "To release anti-skid pressure during high-speed taxiing."},
            "To maintain a constant running clearance (play) and compensate for disc wear as linings erode.",
            "Automatic adjusters retract the pressure plate by a fixed clearance when pedal pressure is released, preventing brake drag while advancing the resting position as the friction pack wears down.",
            "Think about what keeps the pads from dragging on the discs when you release the brake pedal."
        },
        {
            "What is differential braking and how is it used during ground maneuvers?",
            {"Applying the left or right main gear brakes independently to assist nose wheel steering during sharp turns.", "Applying alternate electrical braking to front wheels and hydraulic braking to aft wheels.", "Modulating inboard and outboard wheel brake pressure to equalize temperature."},
            "Applying the left or right main gear brakes independently to assist nose wheel steering during sharp turns.",
            "Differential braking allows the pilot to press only the left or right toe pedal, braking one main gear to create a yawing moment and pivot the aircraft tightly.",
            "Consider pressing only the left toe pedal to turn left on the ground."
        },
        {
            "What is the primary function of the anti-skid system during maximum effort braking?",
            {"To regulate brake pressure to maintain optimal tire slip (10-15% skid) and prevent wheel lockup.", "To automatically apply full reverse thrust when wheel rotation ceases.", "To keep brake rotor temperatures strictly below 100 degrees Celsius."},
            "To regulate brake pressure to maintain optimal tire slip (10-15% skid) and prevent wheel lockup.",
            "Maximum braking friction between tire and runway occurs at 10% to 15% skid. The anti-skid system continuously senses wheel vs reference speed and modulates pressure to prevent lockup.",
            "Recall the peak point on the friction vs skid percentage curve."
        },
        {
            "What is the function of touchdown protection in an aircraft anti-skid system?",
            {"It prevents brake pressure from being applied to the wheels before touchdown, even if the pilot depresses the pedals.", "It automatically deploys the thrust reversers upon nose gear compression.", "It locks the rudder pedals in neutral during landing flair."},
            "It prevents brake pressure from being applied to the wheels before touchdown, even if the pilot depresses the pedals.",
            "Touchdown protection dumps brake pressure during landing approach so that the tires do not touch down with locked wheels, preventing catastrophic blowouts before spin-up occurs.",
            "Think about what would happen if a tire touched the tarmac at 140 knots without spinning."
        },
        {
            "Why does the anti-skid system automatically deactivate at low ground speeds (e.g., below 10 knots)?",
            {"To allow full braking to a complete stop and prevent unwanted brake release during tight taxi turns.", "To conserve electrical battery power during gate arrival.", "To prevent the brake cooling fans from overheating."},
            "To allow full braking to a complete stop and prevent unwanted brake release during tight taxi turns.",
            "At very low speeds, inner wheels on a tight turn rotate very slowly and could be falsely detected as skidding. Disabling anti-skid below ~10 kts allows full stop and parking brake hold.",
            "Think about the slow rotation speed of inner wheels during a tight pivot at the gate."
        },
        {
            "What activates the automatic braking (autobrake) system upon landing?",
            {"The automatic extension of the ground spoilers / speed brakes upon touchdown.", "The initial nose gear compression switch transition to ground mode.", "The selection of reverse thrust on the engine master levers."},
            "The automatic extension of the ground spoilers / speed brakes upon touchdown.",
            "Arming autobrake prepares the system; touchdown causes speed brakes to extend, which triggers switch S1 to apply metered deceleration braking in less than one second.",
            "Look for the spoiler deployment signal that confirms weight-on-wheels and deceleration initiation."
        },
        {
            "How can the flight crew instantly disarm and override the autobrake system during rollout?",
            {"By manually depressing the brake pedals or retracting the speed brakes.", "By switching off the avionics master power switch.", "By cycling the landing gear control lever to UP."},
            "By manually depressing the brake pedals or retracting the speed brakes.",
            "Pilot intervention via pressing the toe brake pedals immediately opens relay contacts (e.g., switch S2), disarming autobrake and transferring control to manual braking.",
            "The pilot's physical pedal action always takes immediate priority over automatic deceleration."
        },
        {
            "What is the maximum steering angle typically available from the cockpit rudder pedals versus the steering handwheel (tiller)?",
            {"Rudder pedals provide up to ~6°-10° for takeoff/landing, while tillers provide up to ~70°-80° for low-speed maneuvering.", "Rudder pedals provide up to 90°, while tillers provide only 5°.", "Both controls provide an identical 45° steering angle under all speeds."},
            "Rudder pedals provide up to ~6°-10° for takeoff/landing, while tillers provide up to ~70°-80° for low-speed maneuvering.",
            "Rudder pedals give fine directional control (+/- 6° to 10°) at high speeds during takeoff and rollout. Tillers allow large angles (up to +/- 80°) for sharp turns during taxiing.",
            "High speed needs small precise deflection; gate maneuvering needs high turning angles."
        },
        {
            "Why must a nose wheel steering bypass / towing safety pin be installed prior to aircraft pushback or towing?",
            {"To depressurize/bypass the steering actuators, preventing hydraulic resistance and damaging reverse loads on the tow bar.", "To lock the nose wheel rigidly parallel to the aircraft fuselage.", "To mechanically disengage the nose gear tire beads from the rims."},
            "To depressurize/bypass the steering actuators, preventing hydraulic resistance and damaging reverse loads on the tow bar.",
            "The towing pin shifts the bypass valve or locks the control valve in neutral, connecting both sides of the steering cylinders to prevent hydraulic lock and tow-bar damage during tug steering.",
            "Think about what happens if the tow tug tries to steer against 3,000 psi hydraulic resistance."
        },
        {
            "On large aircraft with multi-wheel main landing gears (like the Boeing 747), why are the body gears steerable?",
            {"To decrease the minimum turning radius and protect tires from severe scrubbing damage during turns.", "To assist with aerodynamic yaw control during high-altitude cruise.", "To align the body gears with runway crosswinds before touchdown."},
            "To decrease the minimum turning radius and protect tires from severe scrubbing damage during turns.",
            "When large aircraft execute tight turns, wide-track rear wheels scrub laterally against the tarmac. Body gear steering rotates the aft gears proportionally opposite to the nose gear.",
            "Consider the lateral dragging and scrubbing forces on multiple wheels during a sharp pivot."
        },
        {
            "What is the difference between an inductive electronic proximity switch and a magnetic reed switch in landing gear sensing?",
            {"Electronic switches sense coil impedance changes caused by a ferrous target, while reed switches use mechanical contacts closed by a permanent magnet.", "Electronic switches use optical lasers, while reed switches use hydraulic pressure diaphragms.", "Reed switches operate only in vacuum tubes, while electronic switches require manual reset pins."},
            "Electronic switches sense coil impedance changes caused by a ferrous target, while reed switches use mechanical contacts closed by a permanent magnet.",
            "Electronic proximity switches use an energized sensor coil whose impedance alters when a metal target approaches. Reed switches enclose two ferromagnetic contact blades sealed in glass that close near a magnet.",
            "One relies on coil electromagnetic impedance, the other on hermetically sealed magnetic contact leaves."
        },
        {
            "What is the purpose of the crushable frangible cartridge and fuse pin in a Boeing 737 tail skid assembly?",
            {"To absorb excessive tail strike impact energy and sacrificially shear to prevent severe structural damage to the fuselage.", "To deploy a tail parachute during short field landings.", "To trigger the automatic activation of the engine fire extinguishing bottles."},
            "To absorb excessive tail strike impact energy and sacrificially shear to prevent severe structural damage to the fuselage.",
            "In minor strikes, the wear shoe rubs the runway. In heavy tail strikes, the frangible cartridge crushes to absorb energy, and the fuse pin shears if limits are exceeded to protect the rear pressure bulkhead.",
            "Think about mechanical sacrificial elements designed to absorb load before the fuselage skin buckles."
        }
    };
}