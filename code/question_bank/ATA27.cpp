#include <vector>
#include "question.h"

std::vector<Question> getATA27Questions() {
    return {
        //ata 27
        {
            "Which aircraft axis does the pitch motion rotate around?",
            {"Lateral axis", "Longitudinal axis", "Vertical axis"},
            "Lateral axis",
            "Pitch is defined as the nose up - nose down motion around the lateral axis of the aircraft.",
            "Think about the axis that runs from wingtip to wingtip."
        },
        {
            "What are the primary flight controls responsible for roll control?",
            {"Elevators and stabilizer", "Ailerons and roll spoilers", "Rudder and yaw damper"},
            "Ailerons and roll spoilers",
            "Roll (wing up - wing down motion around the longitudinal axis) is controlled by the ailerons and roll spoilers.",
            "Recall which surfaces deflect on the wings to create differential lift."
        },
        {
            "Why do some aircraft lock out the outboard ailerons during high-speed flight?",
            {"To prevent excessive structural wing twist and over-control.", "To allow full hydraulic power to be diverted to the rudder.", "Because outboard ailerons are only used for pitch trim."},
            "To prevent excessive structural wing twist and over-control.",
            "At high speeds, inboard ailerons provide sufficient roll control. Outboard ailerons are deactivated to prevent structural twisting of the wing tips.",
            "Think about high dynamic pressure and structural loads at high flight speeds."
        },
        {
            "Which flight control surface provides pitch trim on transport category aircraft?",
            {"Ailerons", "Rudder", "Trimmable Horizontal Stabilizer (THS)"},
            "Trimmable Horizontal Stabilizer (THS)",
            "Pitch trim requires a specially designated surface, the trimmable horizontal stabilizer, due to the large center of gravity and aerodynamic imbalance variations.",
            "Consider which tail plane surface moves as an entire unit."
        },
        {
            "What determines the flexibility of a standard aircraft steel control cable?",
            {"The length of the cable run.", "The number of wires per strand.", "The thickness of the PVC coating."},
            "The number of wires per strand.",
            "Steel control cables consist of 7 strands helically twisted. The greater the number of wires in each strand (e.g., 19 wires vs 7 wires), the more flexible the cable is.",
            "More individual fine wires twisted together yield higher flexibility."
        },
        {
            "Why must chemical solvents like MEC and PER never be used for cleaning control cables?",
            {"They dissolve the outer steel braids.", "They wash away the internal lubricating grease between the inner strands.", "They make the cable expand permanently."},
            "They wash away the internal lubricating grease between the inner strands.",
            "Solvents such as MEC and PER penetrate inside the cable and wash out the internal lubrication grease, causing premature internal wear and corrosion.",
            "Think about what happens to grease hidden inside stranded steel wires."
        },
        {
            "What is the main purpose of a cable tension regulator?",
            {"To adjust control cable travel limits.", "To keep cable tension roughly constant during thermal expansion/contraction of the fuselage.", "To automatically disconnect jammed flight control surfaces."},
            "To keep cable tension roughly constant during thermal expansion/contraction of the fuselage.",
            "An aluminum fuselage expands more in warm temperatures and contracts in cold temperatures compared to steel cables. The regulator compensates to keep tension constant.",
            "Think about temperature variations between ground and high altitude."
        },
        {
            "How does a cable tension regulator respond when the aircraft structure warms up and expands?",
            {"The internal springs expand and push the quadrants outward.", "The increased cable tension rotates the quadrant halves to compress the internal springs.", "The regulator locks completely via a mechanical shear pin."},
            "The increased cable tension rotates the quadrant halves to compress the internal springs.",
            "On a warm aircraft, the fuselage expands more than the steel cables, increasing cable tension. The quadrant halves rotate the pull rods, moving the cross head to compress the springs.",
            "Greater structural expansion pulls harder on the cables."
        },
        {
            "What safety feature is incorporated into adjustable flight control rods to verify sufficient thread engagement?",
            {"A torque indicator pin.", "An inspection hole in the rod end.", "A color-changing chemical band."},
            "An inspection hole in the rod end.",
            "Adjustable rods are equipped with an inspection hole to visually confirm that the threaded end fitting has penetrated past the minimum required safety depth.",
            "You look through this opening with a wire/pin to ensure proper engagement."
        },
        {
            "What type of gearbox changes low torque, high speed rotation into high torque, low speed output?",
            {"Rotary actuator", "Bevel gearbox", "Offset gearbox"},
            "Rotary actuator",
            "A rotary actuator uses a high reduction gear train to convert a high-speed, low-torque torque shaft rotation into a low-speed, high-torque lever output.",
            "Look for the component providing high mechanical torque to flight surfaces."
        },
        {
            "What component in a screwjack transmission prevents aerodynamic airloads from driving the screwjack backwards?",
            {"A torque limiter fuse.", "A no-back brake.", "A hydraulic bypass metering valve."},
            "A no-back brake.",
            "A no-back brake (ratchet wheel, pawl, and brake disc) holds the ball screwjack in its commanded position and prevents reverse back-driving from airloads.",
            "The name literally states that it stops backward movement."
        },
        {
            "What is the function of differential ailerons?",
            {"To reduce roll rate at high Mach numbers.", "To eliminate adverse yaw (negative turning movement) by creating more drag on the down-going wing.", "To ensure symmetrical spoiler deployment during landing."},
            "To eliminate adverse yaw (negative turning movement) by creating more drag on the down-going wing.",
            "Symmetrical aileron deflection causes adverse yaw due to increased induced drag on the up-going wing. Differential ailerons deflect upward more than downward to balance drag.",
            "Think about turning coordination and opposing yaw forces."
        },
        {
            "Why must both stabilizer trim switches (arming and control) on the control wheel be operated together?",
            {"To achieve twice the normal trim speed.", "To prevent an uncommanded stabilizer runaway if one switch or valve fails.", "To synchronize the captain and first officer trim wheels."},
            "To prevent an uncommanded stabilizer runaway if one switch or valve fails.",
            "Requiring simultaneous activation of arming and control switches prevents a single electrical short or stuck switch from causing a catastrophic stabilizer runaway.",
            "Think about fail-safe redundancy and accidental activation protection."
        },
        {
            "What is the role of the Travel Limitation Unit (TLU) in the rudder control system?",
            {"To limit rudder pedal travel at high airspeeds to prevent structural overload.", "To prevent rudder deflection while the aircraft is parked on the ground.", "To lock the rudder when autopilot is engaged."},
            "To limit rudder pedal travel at high airspeeds to prevent structural overload.",
            "Aerodynamic forces increase with the square of airspeed. The TLU mechanically restricts maximum rudder surface travel at high speeds to prevent vertical stabilizer damage.",
            "High airspeed creates immense aerodynamic dynamic pressure on the vertical fin."
        },
        {
            "What happens when the pilot tilts (rotates) the rudder pedals forward?",
            {"The rudder moves to full deflection.", "Wheel braking is commanded without affecting rudder position.", "The nose wheel steering disconnects."},
            "Wheel braking is commanded without affecting rudder position.",
            "Pushing rudder pedals forward/backward controls yaw and nosewheel steering; tilting/rotating the pedals forward around their axis applies wheel brakes independently.",
            "Toe pressure activates hydraulic braking."
        },
        {
            "Why does an elevator artificial feel system increase control column centering forces at higher airspeeds?",
            {"To simulate aerodynamic resistance and prevent the pilot from overstressing the airframe.", "To compensate for hydraulic system pressure drops.", "To return the trimmable horizontal stabilizer to zero trim."},
            "To simulate aerodynamic resistance and prevent the pilot from overstressing the airframe.",
            "Hydraulic actuators isolate aerodynamic loads from the pilot. The artificial feel system increases resistance at high dynamic pressures (q-feel) to prevent structural damage.",
            "Consider passenger comfort and preventing high g-load overstressing."
        },
        {
            "What are the three flight functions of wing spoiler panels?",
            {"High-lift, pitch trim, and yaw damping.", "Speed brakes, roll spoilers, and ground spoilers (lift dumpers).", "De-icing, leading edge protection, and stall warning."},
            "Speed brakes, roll spoilers, and ground spoilers (lift dumpers).",
            "Spoilers operate differentially to assist roll, symmetrically in flight as speed brakes, and fully deploy on touchdown as ground spoilers to dump lift.",
            "Think of flight deceleration, roll assistance, and wheel braking efficiency."
        },
        {
            "Under what conditions do automatic ground spoilers deploy upon touchdown?",
            {"Aircraft on ground, engines at idle, and spoilers armed (or reverse thrust selected).", "Aircraft airborne, flaps in landing detent, and gear down.", "Speed brake lever moved aft with engines at full climb thrust."},
            "Aircraft on ground, engines at idle, and spoilers armed (or reverse thrust selected).",
            "Full automatic lift dumping requires weight-on-wheels (ground signal), throttle levers at idle, and either the speed brake armed or reverse thrust selected.",
            "Three logical AND conditions ensure the aircraft is actually landing."
        },
        {
            "What is the purpose of the MACH trim subsystem?",
            {"To increase elevator travel during supersonic cruise.", "To prevent 'tuck under' by adjusting stabilizer trim as the aircraft approaches high Mach numbers.", "To trim the rudder when passing Mach 1.0."},
            "To prevent 'tuck under' by adjusting stabilizer trim as the aircraft approaches high Mach numbers.",
            "As Mach number increases, the aerodynamic center of lift shifts aft, creating a nose-down pitching tendency (tuck under). Mach trim trims the stabilizer leading edge down.",
            "Aft center-of-lift shift requires automatic pitch correction."
        },
        {
            "How do Krueger flaps differ from variable camber flaps?",
            {"Krueger flaps are hinged trailing edge devices that increase wing area.", "Krueger flaps fold out from the wing lower leading edge; variable camber flaps bend into a flexible curve.", "Krueger flaps are electrically driven while variable camber flaps use hydraulic jacks only."},
            "Krueger flaps fold out from the wing lower leading edge; variable camber flaps bend into a flexible curve.",
            "Krueger flaps form the lower leading edge skin when retracted and swing forward/down on hinges. Variable camber flaps bend their flexible panel to alter curvature smoothly.",
            "One is a folding hinged flap, the other flexes its camber profile."
        },
        {
            "What is the function of Wing Tip Brakes (WTB) in an Airbus high-lift slat/flap system?",
            {"To apply wheel braking when wing tips touch down.", "To lock the slat/flap transmission shaft in case of asymmetry or uncommanded movement.", "To prevent wing flutter during high-speed cruise."},
            "To lock the slat/flap transmission shaft in case of asymmetry or uncommanded movement.",
            "WTBs are hydraulically released, spring-applied disc brakes that clamp the drive shaft to halt flap/slat motion if asymmetry or uncommanded movement is detected.",
            "Think of emergency drive-shaft locking to stop asymmetric lift."
        },
        {
            "What is an Electro-Hydraulic Actuator (EHA) as used on modern Fly-By-Wire aircraft?",
            {"An actuator driven by pneumatic bleed air with electric signaling.", "A self-contained flight control actuator with its own electric motor-driven hydraulic pump.", "A pure mechanical screwjack driven by dual AC electric motors."},
            "A self-contained flight control actuator with its own electric motor-driven hydraulic pump.",
            "An EHA receives electrical command signals and uses an integrated internal electric pump to generate localized hydraulic power, removing external hydraulic supply lines.",
            "Electric power in, self-contained hydraulic power out."
        },
        {
            "What happens if one Fly-By-Wire computer channel calculates an output that differs from the second internal channel?",
            {"The computer resets both channels and ignores the fault.", "The computer deactivates its output and hands control over to another computer.", "The computer commands the surface to full aerodynamic lock."},
            "The computer deactivates its output and hands control over to another computer.",
            "Each flight control computer features dual-channel calculation (command and monitor). If a discrepancy occurs, the computer deactivates and triggers automatic switching.",
            "Safety requires consensus between the command and monitor channels."
        },
        {
            "How are dual sidestick inputs handled in an Airbus Fly-By-Wire cockpit during normal flight?",
            {"The Captain's stick always physically forces the First Officer's stick to move.", "The signals from both sidesticks are added algebraically.", "The aircraft ignores both inputs until one pilot presses the takeover button."},
            "The signals from both sidesticks are added algebraically.",
            "Unlike linked control columns, sidesticks are passive. Simultaneous inputs are summed algebraically unless one pilot presses and holds the priority takeover pushbutton.",
            "Vector addition of both stick deflection angles occurs."
        },
        {
            "Under Fly-By-Wire Normal Law, what does a pitch demand on the sidestick command?",
            {"A direct proportional elevator angle.", "A load factor (g-load) maneuver demand.", "An immediate change in engine throttle thrust settings."},
            "A load factor (g-load) maneuver demand.",
            "In Normal Law pitch mode, sidestick displacement commands a proportional load factor (g-load), while automatic trim maintains flight path stability when neutralized.",
            "The computer interprets stick movement as a desired g-demand."
        },
        {
            "What are the g-load limits maintained by Airbus Normal Law flight control protections with flaps retracted?",
            {"+2.5 g to -1.0 g", "+3.8 g to -1.5 g", "+1.5 g to 0.0 g"},
            "+2.5 g to -1.0 g",
            "In clean configuration (flaps up), flight control computers enforce flight envelope protection limiting g-loads between +2.5 g and -1.0 g regardless of pilot stick deflection.",
            "Standard commercial transport aircraft category structural limit."
        },
        {
            "What occurs during Alpha Protection (low-speed protection) in Fly-By-Wire Normal Law?",
            {"The engines automatically shut down to prevent compressor stalls.", "Sidestick deflection becomes directly proportional to angle of attack, preventing aerodynamic stall.", "The autopilot forces the landing gear to extend immediately."},
            "Sidestick deflection becomes directly proportional to angle of attack, preventing aerodynamic stall.",
            "When speed enters the alpha-protection range, pitch trim stops and stick demand transitions to angle of attack control, preventing the aircraft from exceeding Alpha Max.",
            "The system limits the wing angle of attack to prevent stall flow separation."
        },
        {
            "What is the function of the Load Alleviation Function (LAF)?",
            {"To dump fuel rapidly during overweight emergency landings.", "To reduce wing root bending moments during gusts by deflecting ailerons and outboard spoilers up.", "To relieve hydraulic pump loads when flying in smooth air."},
            "To reduce wing root bending moments during gusts by deflecting ailerons and outboard spoilers up.",
            "LAF rapidly deflects ailerons and outer spoilers upward during turbulence, shifting aerodynamic lift inboard and reducing destructive wing bending moments.",
            "Reduces upward wing bending stress when encountering strong updrafts."
        },
        {
            "In helicopter aerodynamics, what does the swash plate assembly accomplish?",
            {"It converts engine shaft speed into tail rotor cooling airflow.", "It acts as the interface transferring stationary cockpit control inputs to the rotating main rotor blades.", "It mechanically locks the rotor mast during autorotation."},
            "It acts as the interface transferring stationary cockpit control inputs to the rotating main rotor blades.",
            "The swash plate consists of a lower stationary ring linked to cockpit controls and an upper rotating ring linked to blade pitch horns, allowing cyclic and collective control.",
            "Stationary input to rotating output across a large central bearing."
        },
        {
            "How does a helicopter pilot change collective pitch to initiate a vertical climb?",
            {"By moving the cyclic stick fully forward.", "By raising the collective lever to increase the pitch angle of all main rotor blades simultaneously.", "By pushing the right anti-torque pedal to speed up the rotor."},
            "By raising the collective lever to increase the pitch angle of all main rotor blades simultaneously.",
            "Moving the collective lever translates the swash plate upward/downward, changing the pitch angle of all rotor blades equally and simultaneously to alter overall rotor thrust.",
            "Blade pitch changes across all blades collectively."
        }
    };
}