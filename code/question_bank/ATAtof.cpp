#include <vector>
#include "question.h"

std::vector<Question> getATAtofQuestions() {
    return {
{
    "Which aircraft motion occurs around the lateral axis?",
    {"Roll (wing up - wing down)", "Pitch (nose up - nose down)", "Yaw (nose left - nose right)"},
    "Pitch (nose up - nose down)",
    "Pitch is defined as the nose up - nose down motion of the aircraft around the lateral axis.",
    "Think about what the elevators control."
},
    {
        "Which axis is associated with the yaw motion of an aircraft?",
        {"Longitudinal axis", "Lateral axis", "Vertical axis"},
        "Vertical axis",
        "Yaw is the nose left - nose right motion around the vertical axis.",
        "Think about the direction the rudder turns the nose."
    },
    {
        "What constitutes the primary flight controls according to the TOF manual?",
        {"Flaps, slats, and trim tabs", "Ailerons, roll spoilers, elevators, and rudder", "Speed brakes, horizontal stabilizer, and elevons"},
        "Ailerons, roll spoilers, elevators, and rudder",
        "The primary flight controls control the aircraft around the 3 main axes and consist of the ailerons, roll spoilers, elevators, and rudder.",
        "These are the essential controls for roll, pitch, and yaw."
    },
    {
        "How do roll spoilers assist ailerons during a roll maneuver?",
        {"They extend on the wing with the downward deflected aileron.", "They extend on the wing with the upward deflected aileron to create a down-going wing.", "They extend symmetrically on both wings to reduce airspeed."},
        "They extend on the wing with the upward deflected aileron to create a down-going wing.",
        "Roll spoilers extend on the wing with upward aileron deflection to help fly an accurate turn by reducing lift on that wing.",
        "Spoilers destroy lift on the wing that needs to go down."
    },
    {
        "Why do aircraft like the Boeing 747 lock out outboard ailerons during high-speed flight?",
        {"To prevent excessive structural loading and wing twist at high speeds, using only inboard ailerons.", "Because hydraulic pressure is insufficient at high speeds.", "To increase high-speed drag during cruise."},
        "To prevent excessive structural loading and wing twist at high speeds, using only inboard ailerons.",
        "Both inboard and outboard ailerons are used at low speeds, but only inboard ailerons are active at high speeds while outboard ailerons remain inactive.",
        "Outboard surfaces exert larger twisting moments on the wing structure."
    },
    {
        "What aircraft motion is produced when both elevators are deflected downward simultaneously?",
        {"Nose up motion", "Nose down motion", "Roll to the left"},
        "Nose down motion",
        "Up deflected elevators create a nose up motion, and down deflected elevators create a nose down motion around the lateral axis.",
        "Down elevator increases tail lift, pitching the tail up and nose down."
    },
    {
        "What is the primary aerodynamic and design advantage of using a canard configuration?",
        {"It completely eliminates parasite drag on the fuselage.", "It reduces the load on the main wing, improves airflow control, and increases maneuverability at high angles of attack.", "It eliminates the need for rudder pedals."},
        "It reduces the load on the main wing, improves airflow control, and increases maneuverability at high angles of attack.",
        "A canard (small front wing/foreplane) reduces main wing load, improves airflow management, and enhances maneuverability at high AoA or during stalls.",
        "Canards are placed in front of the main wing."
    },
    {
        "What is the function of a rudder limiter system?",
        {"To lock the rudder in neutral during cruise flight.", "To limit maximum rudder deflection as airspeed increases to prevent structural damage.", "To increase rudder travel at maximum airspeed for sharper turns."},
        "To limit maximum rudder deflection as airspeed increases to prevent structural damage.",
        "The airload on the rudder increases with airspeed. Rudder load relief devices/limiters restrict rudder travel to prevent structural overload.",
        "Dynamic air pressure increases with speed squared."
    },
    {
        "How do ruddervators on a V-tail aircraft produce a yaw motion?",
        {"By moving both control surfaces upwards simultaneously.", "By moving one control surface up and the other down.", "By deploying leading-edge slats on one side."},
        "By moving one control surface up and the other down.",
        "When both ruddervator surfaces move in the same direction, they act as elevators (pitch). When they move differentially (one up, one down), they generate yaw.",
        "Differential movement generates horizontal side-forces."
    },
    {
        "Which of the following is a disadvantage of a V-tail configuration equipped with ruddervators?",
        {"It is heavier than a conventional tail.", "The surface area must be larger because effective areas are only the projections onto the horizontal and vertical planes.", "It cannot provide pitch control at low speeds."},
        "The surface area must be larger because effective areas are only the projections onto the horizontal and vertical planes.",
        "The effective area is only the projected area onto the respective plane; hence, total surface area must be larger, full simultaneous deflections are limited, and rigging is more complex.",
        "Consider geometric projection onto orthogonal axes."
    },
    {
        "What are elevons and where are they typically used?",
        {"Combined elevator and aileron surfaces located on delta-wing / tailless aircraft.", "Combined flaps and spoilers located on transport category aircraft.", "Leading edge slats coupled with rudder pedals."},
        "Combined elevator and aileron surfaces located on delta-wing / tailless aircraft.",
        "Elevons combine elevator and aileron functions and are used on tailless/delta-wing aircraft such as Concorde and the Space Shuttle.",
        "Tailless aircraft need pitch and roll from the same trailing edge surfaces."
    },
    {
        "Which category of flight controls do flaps, leading edge devices, speed brakes, and trim systems belong to?",
        {"Primary flight controls", "Secondary flight controls", "Auxiliary flight indicators"},
        "Secondary flight controls",
        "Secondary flight controls consist of lift devices (flaps, leading edge devices), drag-inducing devices (spoilers/speed brakes), and trim systems.",
        "They modify lift, drag, and trim rather than provide primary 3-axis trajectory control."
    },
    {
        "According to the basic lift device comparison, which flap type provides the highest percentage lift increase (approx. 95%)?",
        {"Plain Flap", "Split Edge Flap", "Fowler Flap"},
        "Fowler Flap",
        "According to the table, Fowler flaps provide ~95% lift increase, Slotted ~70%, Split ~65%, Plain ~55%, and Slats ~35%.",
        "This flap moves backward and downward to increase both camber and wing area."
    },
    {
        "What is the function of flaperons (also known as aileron droop)?",
        {"They act as rudders during ground taxi.", "They operate as ailerons normally, but deflect symmetrically downward when flaps are extended to increase effective flap area.", "They lock the elevators during high-speed cruise."},
        "They operate as ailerons normally, but deflect symmetrically downward when flaps are extended to increase effective flap area.",
        "Flaperons work as regular ailerons for roll control, but drop down symmetrically with flap deployment to enhance overall wing lift.",
        "A hybrid between a flap and an aileron."
    },
    {
        "What is the dual aerodynamic effect of extending speed brakes/spoilers in flight?",
        {"Increase lift and decrease drag.", "Increase drag and decrease lift.", "Increase thrust and decrease pitch."},
        "Increase drag and decrease lift.",
        "Speed brakes / spoilers disrupt smooth airflow over the upper wing surface, creating turbulence which increases drag and decreases lift.",
        "Think about why they are also called lift dumpers."
    },
    {
        "Where are dedicated air brakes typically located on aircraft where lift should not be affected?",
        {"On the wing upper surface only.", "On the fuselage tail cone, lower fuselage, or fuselage sidewalls.", "On the horizontal stabilizer tips."},
        "On the fuselage tail cone, lower fuselage, or fuselage sidewalls.",
        "Air brakes can be split tail cones (civil aircraft) or fuselage-mounted panels (military aircraft) that increase drag without destroying wing lift.",
        "Look at non-wing surfaces capable of handling heavy airloads."
    },
    {
        "Why is pitch trim typically performed by a Trimmable Horizontal Stabilizer (THS) rather than a small tab on large aircraft?",
        {"Because of the greater possible imbalance around the pitch axis.", "Because the rudder cannot handle electrical signals.", "To simplify hydraulic actuator design."},
        "Because of the greater possible imbalance around the pitch axis.",
        "Pitch trim requires a designated large trimming surface (THS) due to substantial center of gravity shifts and large moments around the pitch axis.",
        "Massive CG changes occur during flight due to fuel burn and payload distribution."
    },
    {
        "What are the three core functional blocks of any basic flight control system?",
        {"Sensors, displays, and landing gear.", "Control inputs, control transmissions, and control outputs (surfaces).", "Hydraulic pumps, fuel tanks, and turbines."},
        "Control inputs, control transmissions, and control outputs (surfaces).",
        "All flight control systems are fundamentally divided into control inputs, control transmissions (mechanical, hydraulic, electrical), and control outputs/surfaces.",
        "From cockpit controls to the moving aerodynamic surface."
    },
    {
        "In a modern fly-by-wire Airbus cockpit, how are pitch and roll commands inputted by the pilot?",
        {"Via the central control column and control wheel.", "Via a side stick controller (fore/aft for pitch, left/right for roll).", "Exclusively via rudder pedals and throttle levers."},
        "Via a side stick controller (fore/aft for pitch, left/right for roll).",
        "Airbus FBW uses side sticks where fore/aft operates elevators (pitch) and left/right operates ailerons and roll spoilers (roll). Rudder is still pedal-controlled.",
        "Look at the side console controllers in modern Airbus aircraft."
    },
    {
        "What is the primary airfoil of a rotary-wing aircraft (helicopter)?",
        {"The horizontal stabilizer", "The main rotor blades", "The vertical fin"},
        "The main rotor blades",
        "The primary airfoil of the helicopter is the main rotor, generating both lift and thrust required for flight.",
        "It replaces the fixed wing of conventional aircraft."
    },
    {
        "How is the span of a helicopter rotor blade defined?",
        {"The thickness of the blade at the root.", "The straight line connecting the leading edge to the trailing edge.", "The distance from the root of the blade to the tip, measured along the centerline."},
        "The distance from the root of the blade to the tip, measured along the centerline.",
        "Span is the length from the root (attached to the rotor hub) to the tip (outer end) along the blade centerline.",
        "It measures the overall length of the lifting blade."
    },
    {
        "What is the 'chord' of an airfoil or rotor blade?",
        {"The circumference of the rotor disk.", "A straight reference line drawn from the leading edge to the trailing edge.", "The vertical distance from the bottom to the top surface."},
        "A straight reference line drawn from the leading edge to the trailing edge.",
        "When looking at a blade cross-section, a straight line connecting the leading edge to the trailing edge is the chord line.",
        "It is the baseline line used to define aerodynamic angles."
    },
    {
        "What is the definition of the 'advancing blade' in helicopter aerodynamics?",
        {"The blade moving in the direction opposite to helicopter travel.", "The blade moving forward in the direction of helicopter flight.", "The blade that is currently flapping downward."},
        "The blade moving forward in the direction of helicopter flight.",
        "The forward-moving blade relative to the flight direction is the advancing blade; the rearward-moving one is the retreating blade.",
        "Advance = moving forward with the flight path."
    },
    {
        "What is the relationship between the flight path of a rotor blade and the relative wind?",
        {"The relative wind is perpendicular to the flight path.", "The relative wind is always in the exact opposite direction to the flight path of the blade.", "The relative wind is always aligned with the aircraft centerline."},
        "The relative wind is always in the exact opposite direction to the flight path of the blade.",
        "Relative wind is the direction of airflow relative to the rotor blade and is always opposite to the blade's motion/flight path.",
        "If you move forward, the wind comes from directly ahead."
    },
    {
        "What is the difference between pitch angle and angle of attack (AoA) on a rotor blade?",
        {"Pitch angle is between chord and plane of rotation; AoA is between chord and relative wind.", "Pitch angle is between chord and relative wind; AoA is between chord and fuselage.", "There is no difference; they are identical in all flight regimes."},
        "Pitch angle is between chord and plane of rotation; AoA is between chord and relative wind.",
        "Pitch angle is geometric (chord vs. plane of rotation), while angle of attack is aerodynamic (chord vs. relative wind vector).",
        "AoA depends on the incoming airflow direction."
    },
    {
        "How is lift defined in relation to the relative wind?",
        {"Parallel to the relative wind in the direction of motion.", "Perpendicular (90 degrees) to the relative wind.", "Opposite to the aircraft heading."},
        "Perpendicular (90 degrees) to the relative wind.",
        "Lift is the dynamic aerodynamic force generated by an airfoil perpendicular (90°) to the relative wind to counteract gravity/weight.",
        "Drag is parallel; lift is perpendicular."
    },
    {
        "According to the principle of gyroscopic precession, when an external force is applied to a spinning rotor, where does the maximum result/output occur?",
        {"Immediately at the point of force application.", "90 degrees later in the direction of rotation.", "180 degrees opposite to the point of application."},
        "90 degrees later in the direction of rotation.",
        "Gyroscopic precession dictates that a force applied to a rotating body manifests its output 90 degrees later in the direction of rotation.",
        "This is why control inputs are phased 90 degrees prior to the desired tilt."
    },
    {
        "Why does a conventional single-rotor helicopter require an anti-torque tail rotor?",
        {"To provide longitudinal pitch trim.", "To counteract the fuselage torque reaction caused by Newton's Third Law when turning the main rotor.", "To generate additional vertical lift during takeoff."},
        "To counteract the fuselage torque reaction caused by Newton's Third Law when turning the main rotor.",
        "In accordance with Newton's Third Law (action and reaction), the fuselage tends to rotate opposite to the main rotor. The tail rotor creates sideways thrust to counteract this torque.",
        "For every action, there is an equal and opposite reaction."
    },
    {
        "How does a gyrocopter (Autogiro) generate lift during horizontal flight?",
        {"Its rotor is powered directly by a large turbine engine.", "Its unpowered rotor turns freely by airflow (autorotation) while forward propulsion is provided by a separate propeller.", "By venting high-pressure bleed air through the blade tips."},
        "Its unpowered rotor turns freely by airflow (autorotation) while forward propulsion is provided by a separate propeller.",
        "In a gyrocopter, the rotor is not engine-driven in flight; it is spun by upward airflow (autorotation) while pull/push propellers overcome drag.",
        "The rotor rotates freely without an engine drive shaft during flight."
    },
    {
        "What characterizes a convertiplane?",
        {"It has no wings and uses only tail jets for forward flight.", "It is equipped with engine-driven rotors, fixed wings, and propellers, allowing power transfer between rotor and forward propulsion.", "It cannot land vertically under any circumstance."},
        "It is equipped with engine-driven rotors, fixed wings, and propellers, allowing power transfer between rotor and forward propulsion.",
        "Convertiplanes combine rotors, wings, and propellers. Power is directed to the rotor for VTOL and shifted to propellers/wings for high-speed cruise.",
        "It converts its mode of lift from rotary wing to fixed wing as speed increases."
    },
    {
        "What is a Transformation Helicopter, such as the Boeing V-22 Osprey?",
        {"A helicopter with tiltable proprotors/wings that takes off vertically like a helicopter and tilts engines forward to fly like an airplane.", "A helicopter that transforms into an amphibious boat upon water landing.", "A drone that deploys parachute wings during descent."},
        "A helicopter with tiltable proprotors/wings that takes off vertically like a helicopter and tilts engines forward to fly like an airplane.",
        "Transformation helicopters (tiltrotors/tiltwings) take off vertically and tilt proprotors forward to achieve airplane-like cruise speeds and efficiencies.",
        "V-22 Osprey uses tilting nacelles on the wing tips."
    },
    {
        "What is 'dissymmetry of lift' in forward helicopter flight?",
        {"The tail rotor producing more lift than the main rotor.", "The advancing blade producing more lift than the retreating blade due to added airspeed.", "Unequal fuel burn between left and right fuel cells."},
        "The advancing blade producing more lift than the retreating blade due to added airspeed.",
        "In forward flight, forward airspeed adds to the advancing blade's rotational speed and subtracts from the retreating blade's speed, causing unequal lift generation across the disk.",
        "Advancing blade speed = V_rot + V_flight; retreating = V_rot - V_flight."
    },
    {
        "If a helicopter flies forward at 100 kts with a blade tip speed of 400 kts, what is the relative airspeed at the tip of the advancing blade versus the retreating blade?",
        {"Advancing: 400 kts, Retreating: 400 kts", "Advancing: 500 kts, Retreating: 300 kts", "Advancing: 300 kts, Retreating: 500 kts"},
        "Advancing: 500 kts, Retreating: 300 kts",
        "On the advancing blade: 400 + 100 = 500 kts. On the retreating blade: 400 - 100 = 300 kts. The total speed difference across the disk is 200 kts.",
        "Add forward airspeed to the advancing side and subtract it from the retreating side."
    },
    {
        "How does blade flapping naturally help correct for dissymmetry of lift?",
        {"The advancing blade flaps up (reducing AoA and lift); the retreating blade flaps down (increasing AoA and lift).", "The advancing blade flaps down to increase lift, while the retreating blade locks rigid.", "Flapping rotates the engine faster to equalize rotor drag."},
        "The advancing blade flaps up (reducing AoA and lift); the retreating blade flaps down (increasing AoA and lift).",
        "Increased lift causes the advancing blade to flap upward, changing the relative wind and decreasing its AoA. Decreased lift makes the retreating blade flap down, increasing its AoA.",
        "Upward motion introduces a downward component of relative airflow."
    },
    {
        "Why is a lead-lag (drag) hinge required on a articulated helicopter rotor head?",
        {"To allow blades to fold during hangar parking only.", "Because blade flapping shifts the blade center of gravity closer/further from the rotation axis, causing Coriolis acceleration and deceleration.", "To replace the collective pitch bearing."},
        "Because blade flapping shifts the blade center of gravity closer/further from the rotation axis, causing Coriolis acceleration and deceleration.",
        "Upward flapping moves the blade CG inboard (accelerating the blade forward), while downward flapping moves it outboard (decelerating it backward). Lead-lag hinges absorb these forces.",
        "Think of a figure skater pulling in arms during a pirouette (conservation of angular momentum)."
    },
    {
        "What is 'translating tendency' in a single-rotor helicopter?",
        {"The tendency of the main rotor to stall at high speeds.", "The lateral drift of the helicopter caused by the sideways thrust of the anti-torque tail rotor during a hover.", "The uncommanded pitch up during transition to forward flight."},
        "The lateral drift of the helicopter caused by the sideways thrust of the anti-torque tail rotor during a hover.",
        "Translating tendency is the lateral drift caused by tail rotor anti-torque thrust pushing the entire aircraft sideways. It is compensated by tilting the main rotor disk slightly opposite.",
        "The tail rotor pushes sideways against the air."
    },
    {
        "What aerodynamic mechanism creates the 'ground effect' when hovering within one rotor diameter of the surface?",
        {"Increased engine exhaust backpressure creating ground suction.", "Interference of the ground with downwash airflow, reducing downwash velocity, increasing blade AoA and efficiency.", "Static electricity buildup between the skids and the runway."},
        "Interference of the ground with downwash airflow, reducing downwash velocity, increasing blade AoA and efficiency.",
        "Ground proximity restricts downward air velocity, building a high-pressure cushion, reducing induced drag, and requiring less power / lower pitch angle to maintain hover.",
        "Ground interference reduces induced flow velocity through the rotor disk."
    },
    {
        "During the descent phase of an autorotation after engine failure, what provides the energy to keep the rotor turning?",
        {"A backup battery-powered electric motor.", "Airflow passing upward through the rotor disk from bottom to top.", "Residual compressor inertia from the dead turbine."},
        "Airflow passing upward through the rotor disk from bottom to top.",
        "During descent in autorotation, upward airflow through the rotor disk drives the blades, converting potential energy into rotational kinetic energy to sustain RPM.",
        "Air flows from bottom to top through the rotor during unpowered descent."
    },
    {
        "How does a pilot use the kinetic energy stored in the rotor during the final touchdown phase of an autorotation?",
        {"By pitching the nose 90 degrees downward.", "By increasing collective pitch near the ground to convert rotor RPM into lift and cushion the landing.", "By applying maximum anti-torque pedal only."},
        "By increasing collective pitch near the ground to convert rotor RPM into lift and cushion the landing.",
        "Near the ground (Phase 2), the pilot increases collective pitch, utilizing the kinetic energy stored in the rotating blades to produce a temporary surge of lift to cushion touchdown.",
        "Trading rotational inertia for landing lift."
    }
};

}