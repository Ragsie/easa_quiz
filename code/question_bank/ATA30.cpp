#include <vector>
#include "question.h"

std::vector<Question> getATA30Questions() {
    return {
        // ata 30
        {
            "What are the two primary negative aerodynamic effects of ice buildup on an aircraft?",
            {"Increased lift and decreased drag.", "Decreased lift, increased weight, and increased drag.", "Decreased stall speed and increased engine thrust."},
            "Decreased lift, increased weight, and increased drag.",
            "Ice buildup impairs the aerodynamic profile of the wings/airfoils leading to a decrease in lift, an increase in drag, and adds extra weight to the aircraft structure.",
            "Consider how ice alters the airfoil shape and adds physical mass to the aircraft."
        },
        {
            "Under what temperature range does clear ice (glaze) typically form on aircraft surfaces?",
            {"Between 0 °C and -10 °C.", "Below -20 °C only.", "Between -15 °C and -40 °C."},
            "Between 0 °C and -10 °C.",
            "When supercooled water droplets hit the surface at temperatures between 0 °C and -10 °C, they do not freeze immediately, flowing aft and forming a clear, smooth, and dense ice layer.",
            "Clear ice forms in relatively warmer sub-zero temperatures where droplets have time to spread before freezing."
        },
        {
            "What shape does rime ice typically form on a leading edge during high-speed flight?",
            {"A smooth trailing wedge.", "A characteristic double horn shape.", "A perfectly flat sheet."},
            "A characteristic double horn shape.",
            "Below -10 °C, very cold droplets freeze instantly on impact at the leading edge. At higher airspeeds, this creates a typical double horn shape protruding forward and sideways.",
            "Think of two protruding horns growing forward from the stagnation point."
        },
        {
            "Why must thermal anti-ice systems not be left operating continuously during flight?",
            {"Because bleeding hot air from the engines reduces engine performance and economy.", "Because the wings will permanently deform from excessive heat.", "Because it rapidly discharges the main aircraft batteries."},
            "Because bleeding hot air from the engines reduces engine performance and economy.",
            "Bleed air taken from the engine compressor reduces engine efficiency, thrust output, and fuel economy. Therefore, thermal anti-ice is only switched on when icing conditions exist or are anticipated.",
            "Think about where the thermal energy comes from and its impact on fuel consumption."
        },
        {
            "How does an electronic vibrating probe ice detector sense the accumulation of ice?",
            {"By measuring the optical transparency of the probe tip.", "Ice buildup increases the tip mass, decreasing its vibration frequency.", "By measuring the electrical resistance between two exposed surface pins."},
            "Ice buildup increases the tip mass, decreasing its vibration frequency.",
            "An oscillator drives the probe tip to vibrate at a set natural frequency. As ice accumulates, the added mass causes the vibration frequency to decrease below an actuation threshold.",
            "Added weight on a vibrating rod slows down its oscillation rate."
        },
        {
            "What happens in an electronic ice detector when the vibration frequency drops below the threshold value?",
            {"The aircraft engines immediately throttle down.", "A feedback circuit activates heating to melt the ice, restoring frequency and advancing a cycle counter.", "A pyrotechnic cutter chips the ice off mechanically."},
            "A feedback circuit activates heating to melt the ice, restoring frequency and advancing a cycle counter.",
            "The feedback circuit switches on internal heating to shed the ice from the probe tip. Once clean, the frequency returns to baseline, heating turns off, and a cycle counter records the event.",
            "The detector automatically de-ices its own sensor element to be ready for the next cycle."
        },
        {
            "Where is the optical ice detector located on Airbus aircraft?",
            {"Under the horizontal stabilizer.", "Between the front windscreens in sight of both pilots.", "Directly inside the engine core cowling."},
            "Between the front windscreens in sight of both pilots.",
            "The visual/optical ice indicator is installed between the cockpit windshields so that flight crew can visually confirm ice buildup and manually activate thermal anti-ice switches.",
            "Look right in the center of the cockpit windshield frame."
        },
        {
            "Why must pilots wait until a specific thickness of ice has formed before activating pneumatic de-icing boots?",
            {"To ensure the pneumatic pump has built up sufficient reservoir pressure.", "To prevent ice bridging, ensuring the pressurized boots can effectively crack and shed the ice layer.", "To allow the rubber boots to warm up to operating temperature."},
            "To prevent ice bridging, ensuring the pressurized boots can effectively crack and shed the ice layer.",
            "If activated too early or with too thin an ice layer, the boot may expand without cleanly cracking the ice, potentially forming an ice bridge/shell around the inflated shape.",
            "Thin ice flexes without breaking off; a solid layer is required to crack cleanly."
        },
        {
            "What is the function of the pneumatic manifold in an airfoil pneumatic de-icing system?",
            {"It regulates and distributes pressurized air to inflate and deflate the rubber boots according to controller signals.", "It filters moisture from the fuel system.", "It heats the de-icing fluid before delivery."},
            "It regulates and distributes pressurized air to inflate and deflate the rubber boots according to controller signals.",
            "The pneumatic manifold contains the valves that direct air from the air compressor/tank into the boots to inflate them rhythmically and subsequently vent them to deflate.",
            "A manifold acts as the distribution and switching valve block for the air supply."
        },
        {
            "How are helicopter main rotor blade heating mats powered to prevent aerodynamic imbalance?",
            {"All blades are continuously heated simultaneously.", "Opposite blade pairs are heated sequentially together (e.g., 1 & 3, then 2 & 4).", "Only the retreating blade is heated during rotation."},
            "Opposite blade pairs are heated sequentially together (e.g., 1 & 3, then 2 & 4).",
            "Heating opposite pairs simultaneously maintains rotational dynamic balance and prevents asymmetric ice shedding, while cycling minimizes the peak load on the electrical generators.",
            "Consider symmetry to keep the rotor disk dynamically balanced."
        },
        {
            "Why does the tail rotor electrical de-icing system not require a dedicated power distributor unit?",
            {"Because tail rotors use hot bleed air instead of electricity.", "Because the tail rotor is smaller, requiring less power, allowing all blades to be heated simultaneously.", "Because tail rotors rely purely on chemical weeping fluid."},
            "Because the tail rotor is smaller, requiring less power, allowing all blades to be heated simultaneously.",
            "Due to the smaller surface area and lower electrical power requirements, tail rotor blades can be energized all at once without overloading the electrical system.",
            "Smaller blades mean total electrical draw is low enough for simultaneous heating."
        },
        {
            "How is electrical wing de-icing power applied across the aircraft wings on modern jets?",
            {"Asymmetrically based on individual sensor demand.", "Symmetrically to corresponding slats on both wings simultaneously.", "Alternating between the left wing and right wing every 10 minutes."},
            "Symmetrically to corresponding slats on both wings simultaneously.",
            "To prevent asymmetric aerodynamic lift and drag differences between the wings, de-icing heat is always applied symmetrically to matching slat pairs.",
            "Aerodynamic roll trim requires identical airfoil profiles on left and right sides."
        },
        {
            "Why is ground chemical de-icing fluid necessary instead of relying on aircraft thermal anti-ice systems on the ramp?",
            {"Aircraft anti-ice systems are only certified for flight and cannot safely clear heavy ground snow/frost accumulations.", "Ground de-icing fluid is required to cool the wings down before fueling.", "Engine bleed air cannot be generated when engines are at idle."},
            "Aircraft anti-ice systems are only certified for flight and cannot safely clear heavy ground snow/frost accumulations.",
            "Thermal anti-ice systems cannot melt pre-existing heavy frost, snow, or ice on the ground without causing severe overheating or runback refreezing, and are restricted from prolonged ground use.",
            "Clean aircraft concept requires chemical removal prior to takeoff."
        },
        {
            "Why is hot air used instead of chemical de-icing fluids for aircraft engine fan areas on ground?",
            {"Hot air is cheaper than water.", "Chemical de-icing fluids can damage engine components and fan blade coatings.", "Chemical fluid freezes instantly inside the bypass duct."},
            "Chemical de-icing fluids can damage engine components and fan blade coatings.",
            "Spraying chemical de-icing fluid into turbine engines can cause core contamination, corrosion, toxic cabin fumes via bleed air, and acoustic liner/blade coating degradation.",
            "Think of compressor ingestion hazards and chemical incompatibility with titanium/composites."
        },
        {
            "Which airframe components are commonly identified as critical devices requiring hot air ground de-icing?",
            {"Engine inlets, APU inlet/exhaust, carbon brakes, and radomes.", "Main landing gear tires, passenger seats, and galley drains.", "Flap tracks, hydraulic reservoirs, and VHF antennas."},
            "Engine inlets, APU inlet/exhaust, carbon brakes, and radomes.",
            "Components sensitive to chemical contamination include the engine core/inlet, APU inlet/exhaust, carbon brake discs (which absorb chemicals), and composite radomes.",
            "Identify components that suffer chemical absorption or ingestion problems."
        },
        {
            "What is the purpose of the air-ground switching logic in pitot and static probe heating circuits?",
            {"To turn off all heating during flight to conserve fuel.", "To apply reduced heating power on ground to prevent probe burnout and full power in flight for cooling compensation.", "To reverse probe polarity on landing."},
            "To apply reduced heating power on ground to prevent probe burnout and full power in flight for cooling compensation.",
            "On the ground without airflow, full heating power would overheat and destroy the probes. In flight, high-speed cold airflow provides immense convective cooling, requiring full power.",
            "High airflow in flight draws heat away much faster than stagnant air on the ramp."
        },
        {
            "How does the central warning system detect a failure in an air data probe heating circuit?",
            {"By detecting high hydraulic pressure in the pitot tube.", "By using inline current sensors that trigger a fault alert when heating current drops too low.", "By measuring the airspeed discrepancy with GPS."},
            "By using inline current sensors that trigger a fault alert when heating current drops too low.",
            "Current sensors continuously monitor the circuit. If an open heating element or broken wire causes current flow to drop below a specified threshold, a flight deck caution is generated.",
            "No current flowing through a powered circuit indicates an open/burned heater."
        },
        {
            "What danger exists if air-ground sensing falsely detects flight status while the aircraft is parked on the ramp?",
            {"The aircraft batteries will instantly explode.", "Drain masts and probes switch to high-power mode and become extremely hot, creating a severe burn/fire hazard.", "The bleed valves will over-pressurize the fuel tanks."},
            "Drain masts and probes switch to high-power mode and become extremely hot, creating a severe burn/fire hazard.",
            "Flight mode engages full heating power without convective airflow cooling, causing drain masts and probes to reach dangerous surface temperatures capable of inflicting severe burns.",
            "Lack of high-speed cooling airflow combined with flight-rated wattage equals extreme temperatures."
        },
        {
            "How is hot air engine anti-icing supplied and directed within the engine nacelle?",
            {"Air is sucked from the cabin exhaust and blown onto the spinner.", "High-pressure bleed air (~250 °C) passes through an anti-ice valve into the cowl leading edge and exhausts through nozzles.", "Hydraulic fluid transfers heat directly to the fan blades."},
            "High-pressure bleed air (~250 °C) passes through an anti-ice valve into the cowl leading edge and exhausts through nozzles.",
            "Hot bleed air at approximately 250 °C is ported directly from the compressor, flows through an engine anti-ice valve into the cowl lip cavity, heats the inlet guide vanes, and exhausts through peripheral nozzles.",
            "Compressor bleed air enters the leading-edge D-duct of the nacelle inlet."
        },
        {
            "Why is there only one wing anti-ice switch in the cockpit to control both left and right wings simultaneously?",
            {"To save switch panel space only.", "To enforce strict symmetrical operation, preventing asymmetric wing aerodynamic lift and drag.", "Because both wings share a single physical shut-off valve."},
            "To enforce strict symmetrical operation, preventing asymmetric wing aerodynamic lift and drag.",
            "Operating wing anti-ice on one side only would cause unequal lift and drag profiles, compromising aerodynamic controllability. Symmetrical actuation is mandatory.",
            "Asymmetry across wings causes hazardous roll and yaw moments."
        },
        {
            "What is the purpose of a telescoping duct in a wing thermal anti-ice system?",
            {"To adjust air pressure depending on altitude.", "To supply hot bleed air continuously to movable leading-edge slats across extended and retracted positions.", "To vent exhaust gases out through the wingtip."},
            "To supply hot bleed air continuously to movable leading-edge slats across extended and retracted positions.",
            "When slats extend for takeoff/landing, the distance between the fixed wing spar and the movable slat increases. The telescoping duct expands and retracts to maintain bleed air delivery.",
            "Slats move forward and down when deployed; the air duct must physically telescope."
        },
        {
            "In what position are wing anti-ice valves permitted to be locked during maintenance deactivate procedures?",
            {"In the closed position only, and strictly on both wings.", "In the open position only.", "In the intermediate 50% regulating position."},
            "In the closed position only, and strictly on both wings.",
            "Maintenance procedures allow locking wing anti-ice valves in the closed position only (subject to MEL non-icing dispatch conditions) and always symmetrically on both sides.",
            "Leaving a wing valve open on the ground risks severe structural overheating."
        },
        {
            "How does a hot oil anti-icing system protect engine air intakes on small aircraft and helicopters?",
            {"By spraying hot oil droplets into the intake airflow.", "By circulating hot engine scavenger oil through hollow struts located inside the air intake.", "By coating intake walls with heated silicone oil."},
            "By circulating hot engine scavenger oil through hollow struts located inside the air intake.",
            "Hot engine lubricating oil is routed through hollow intake struts, transferring scavenged engine heat to the metal structure to prevent ice accumulation without compressor bleed loss.",
            "Engine oil is inherently hot; routing it through hollow intake vanes provides free thermal anti-icing."
        },
        {
            "How does an AC power control circuit reduce probe/mast heating power to 50% on ground?",
            {"By routing current through an inline series diode, allowing only the positive half-wave of the AC cycle.", "By switching the AC supply to a low-voltage DC battery.", "By grounding the neutral line through a variable resistor."},
            "By routing current through an inline series diode, allowing only the positive half-wave of the AC cycle.",
            "A series diode blocks the negative half-cycle of the AC waveform on the ground, cutting average power in half. In flight, an air-ground relay bypasses the diode for full 100% power.",
            "Half-wave rectification halves the total electrical power delivered."
        },
        {
            "How does a DC-powered heating circuit achieve dual power levels for ground and flight operation?",
            {"By switching two internal resistive heating elements from series on ground to parallel in flight.", "By reversing current flow every second on ground.", "By pulsing the DC voltage with an ignition coil."},
            "By switching two internal resistive heating elements from series on ground to parallel in flight.",
            "In series (ground), total resistance is doubled and power is minimized (P = V^2 / 2R). In parallel (flight), equivalent resistance is halved, quadrupling total heat output (P = 2 * V^2 / R).",
            "Series wiring yields high resistance and low current; parallel yields low resistance and high current."
        },
        {
            "What is the main advantage of an electronic temperature controller (SCR) over a mechanical bi-metal switch?",
            {"It does not require electrical power.", "It has no mechanical moving parts to wear out, switches more frequently, and handles higher currents precisely.", "It directly produces heat without a resistive wire."},
            "It has no mechanical moving parts to wear out, switches more frequently, and handles higher currents precisely.",
            "Solid-state electronic switches (SCRs) eliminate mechanical contact arcing, contact erosion, and hysteresis lag, enabling smooth and highly precise temperature regulation.",
            "Solid-state electronics eliminate physical contact wear."
        },
        {
            "Where is the heating element positioned in cockpit window #1 (windshield) versus side windows #2 and #3?",
            {"Windshield heating film is behind the outer glass; side window heating film is near the inner glass pane.", "Windshield heating is inside the cockpit frame; side windows have external air nozzles.", "Windshield heating is on the innermost layer; side windows are heated externally."},
            "Windshield heating film is behind the outer glass; side window heating film is near the inner glass pane.",
            "Windshields require exterior ice prevention (anti-icing), so the film is laminated just behind the outer pane. Side windows prioritize interior demisting and crew comfort, so the film is behind the inner pane.",
            "Anti-icing faces external weather; demisting faces moist cabin air."
        },
        {
            "Why do window heat controllers implement a 4-minute soft-start ramp function upon system activation?",
            {"To allow the flight crew time to adjust cockpit illumination.", "To prevent thermal shock and structural stress cracking across laminated glass and PVB layers.", "To let the engine generators warm up before applying electrical loads."},
            "To prevent thermal shock and structural stress cracking across laminated glass and PVB layers.",
            "Applying instantaneous 2 kW power to cold laminated glass induces severe differential thermal expansion between glass and PVB plies, potentially causing delamination or structural shattering.",
            "Rapid temperature jumps crack brittle multi-layer glass assemblies."
        },
        {
            "How does a window heat controller react if a Positive Temperature Coefficient (PTC) temperature sensor shorts to zero ohms?",
            {"It immediately supplies maximum emergency power of 5 kW.", "A dedicated monitoring circuit detects the shorted sensor fault and shuts down heating power completely.", "It ignores the sensor and operates on a 30-second fixed timer."},
            "A dedicated monitoring circuit detects the shorted sensor fault and shuts down heating power completely.",
            "A shorted PTC sensor indicates an artificially low/sub-zero temperature which would normally command 100% continuous heat, causing window destruction. The controller detects this abnormal impedance and shuts down power.",
            "Controllers treat shorted sensor inputs as fault conditions to prevent catastrophic thermal runaway."
        },
        {
            "What are the operational restrictions regarding the use of cockpit windshield wipers?",
            {"They can only be operated when the engines are shut down.", "Never operate on a dry windshield, and do not exceed approximately 250 kts airspeed.", "Wipers must only be run in high-speed mode during takeoff roll."},
            "Never operate on a dry windshield, and do not exceed approximately 250 kts airspeed.",
            "Operating on dry glass scratches the glass and damages anti-static/repellent coatings. Exceeding ~250 kts creates excessive aerodynamic dynamic pressure that can bend arms or strip wiper drive gears.",
            "Dry glass causes severe abrasive scratching; high aerodynamic speed overloads the mechanical linkage."
        },
        {
            "What is the contact angle between water droplets and standard untreated aircraft windshield glass?",
            {"Approximately 20°.", "Exactly 90°.", "Approximately 140°."},
            "Approximately 20°.",
            "On clean, untreated glass, the water contact angle is approximately 20°, causing droplets to spread flat, wet the surface, and severely impair pilot vision.",
            "Low contact angle means high wetting and poor water bead runoff."
        },
        {
            "How do chemical rain repellent fluids and hydrophobic coatings improve pilot visibility in heavy rain?",
            {"They dissolve the water into transparent vapor.", "They increase the water contact angle up to 80° - 100°, causing water to form beads that airstream easily blows away.", "They coat the glass with an opaque oil layer that absorbs rain impacts."},
            "They increase the water contact angle up to 80° - 100°, causing water to form beads that airstream easily blows away.",
            "By increasing the contact angle (fluid > 80°, hydrophobic coating ~100°), droplets bead up into compact spheres with minimal surface adhesion, allowing high-speed flight airflow to sweep them off cleanly.",
            "Higher contact angle creates round beads that slide off effortlessly in the airstream."
        }
    };
}