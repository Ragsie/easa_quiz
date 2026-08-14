#include <vector>
#include "question.h"

std::vector<Question> getATA22Questions() {
    return {
            {
                "Why is open loop control generally not applied to primary aircraft autoflight systems?",
                {"Open loop control requires complex feedback sensors that add excessive weight.", "Open loop control cannot compensate for unpredictable external disturbances acting on the controlled system.", "Open loop control inherently creates permanent high-frequency oscillations."},
                "Open loop control cannot compensate for unpredictable external disturbances acting on the controlled system.",
                "In open loop control, there is no feedback comparison. Because atmospheric disturbances (like wind gusts and turbulence) cannot be predicted, an open loop controller cannot guarantee a constant or desired output state.",
                "Think about what happens when a sudden gust hits the airplane if the controller does not measure the actual output."
            },
            {
                "What characterizes the output behavior of a Proportional (P) Regulator?",
                {"The output changes at a constant rate proportional to time.", "The change in output value is always directly in proportion to the change in input error value.", "The output is proportional to the derivative of the input error."},
                "The change in output value is always directly in proportion to the change in input error value.",
                "For a P-regulator, the output value is directly proportional to the error input. A pure P-regulator requires an error to produce an output and cannot fully eliminate steady-state error.",
                "Remember: Output = Gain * Input Error."
            },
            {
                "Which type of regulator is capable of completely compensating for steady-state disturbances and eliminating static error?",
                {"Differential (D) Regulator", "Proportional (P) Regulator", "Integral (I) Regulator"},
                "Integral (I) Regulator",
                "An Integral (I) regulator generates an output that continuously ramps over time as long as an error persists, allowing it to drive steady-state error completely to zero.",
                "Consider which mathematical operation accumulates small errors over time until none remains."
            },
            {
                "What is the primary function of a Differential (D) Regulator in a control loop?",
                {"It provides fast response by producing an output proportional to the rate of change of the input error.", "It stores steady-state error in memory to trim control surfaces permanently.", "It prevents any delay caused by energy storage elements."},
                "It provides fast response by producing an output proportional to the rate of change of the input error.",
                "The D-regulator reacts to how quickly the error is changing (rate of change), providing anticipatory and rapid compensation for incipient errors.",
                "Think about derivative: rate of change / anticipation."
            },
            {
                "How are an aircraft's six degrees of freedom divided in flight guidance fundamentals?",
                {"Two rotary degrees and four translatory degrees.", "Three rotary degrees around body axes and three translatory degrees along body axes.", "Six translational degrees of freedom with no rotation."},
                "Three rotary degrees around body axes and three translatory degrees along body axes.",
                "An aircraft moves in six degrees of freedom: three rotary degrees (pitch around Y, roll around X, yaw around Z) and three translatory degrees (linear motion along X, Y, and Z axes).",
                "Consider the 3 spatial axes: rotation and translation for each."
            },
            {
                "What is the only direct force available in civil transport aircraft to control linear translation along the longitudinal (X) axis?",
                {"Elevator deflection", "Engine thrust", "Aileron trim"},
                "Engine thrust",
                "Engine thrust directly controls linear movement along the longitudinal (X) axis. Other translational motions are controlled indirectly by changing aircraft attitude.",
                "Think about which system supplies total propulsive energy along the direction of flight."
            },
            {
                "In autoflight terminology, what constitutes 'Inner Loop' control?",
                {"Flight path regulation (such as tracking a VOR radial or maintaining altitude)", "Flight condition/attitude regulation (controlling rotary degrees of freedom)", "Flight Management Computer route planning"},
                "Flight condition/attitude regulation (controlling rotary degrees of freedom)",
                "The inner loop is responsible for flight condition/attitude stabilization (pitch, roll, yaw), whereas outer loops govern flight path parameters (altitude, heading, glide slope, track).",
                "Inner = Attitude stabilization; Outer = Flight path navigation."
            },
            {
                "What is the standard color scheme for active and armed modes displayed on the Flight Mode Annunciator (FMA) of a PFD?",
                {"Active modes in green (top line), armed modes in amber, white, or blue (second line).", "Active modes in red, armed modes in green.", "Active modes in white, armed modes in flashing magenta."},
                "Active modes in green (top line), armed modes in amber, white, or blue (second line).",
                "According to standard avionics conventions (such as EFIS/PFD FMA layouts), active operating modes are displayed in green on the uppermost line, while armed modes appear in amber, white, or blue on the second line.",
                "Green means 'actively doing it now'; white/cyan/blue/amber indicates 'standing by'."
            },
            {
                "What defines the 'Managed Automatic' level of automatic flight?",
                {"The pilot flies manually following crossbar commands provided by the FMS.", "The aircraft is solely controlled by AP and ATS, with reference values provided by the FMS flight plan.", "The pilot selects all target speed, heading, and altitude values on the MCP/FCU."},
                "The aircraft is solely controlled by AP and ATS, with reference values provided by the FMS flight plan.",
                "Managed Automatic is the highest level of automation where AP and Auto-throttle/thrust fly the aircraft using target data generated by the FMS navigation database and flight plan.",
                "Managed = FMS-driven targets; Selected = Pilot knob-dialed targets."
            },
            {
                "What occurs during the Synchronization Phase prior to engaging the autopilot into a primary control channel?",
                {"Control surfaces are violently driven to test servo travel limits.", "The command memories are continuously updated with actual attitude/values so the initial error is zero upon engagement.", "The hydraulic actuators are completely depressurized to prevent uncommanded motion."},
                "The command memories are continuously updated with actual attitude/values so the initial error is zero upon engagement.",
                "To prevent sudden surface jerks or hard-overs upon AP engagement, the Attitude Command Memory is constantly updated with current flight parameters, ensuring an initial error of zero at the moment of engagement.",
                "Think about matching current actual attitude so that switching ON causes no bump."
            },
            {
                "How is the dynamic division of work organized between the elevator and the horizontal stabilizer during autopilot pitch attitude hold?",
                {"The stabilizer counteracts high-frequency gusts while the elevator trims long-term loads.", "The elevator counteracts short-term disturbances while the stabilizer trims out long-term disturbances.", "The elevator is permanently locked in neutral and all pitch control is done by stabilizer jack screws."},
                "The elevator counteracts short-term disturbances while the stabilizer trims out long-term disturbances.",
                "The elevator reacts immediately to short-term attitude errors (proportional behavior). To relieve the elevator servo load and restore full elevator travel range, the auto-trim moves the stabilizer (integral behavior) to counteract persistent loads.",
                "Fast response = elevator; offload/long-term trim = horizontal stabilizer."
            },
            {
                "What aerodynamic phenomenon necessitates the installation of a Mach Trim system in high-speed aircraft?",
                {"A forward shift of the center of lift causing extreme nose-up pitch at high Mach numbers.", "An aft movement of the center of lift as Mach number increases, causing an uncommanded pitch-down tendency ('tuck under').", "A sudden stall of the rudder due to supersonic shockwave formation."},
                "An aft movement of the center of lift as Mach number increases, causing an uncommanded pitch-down tendency ('tuck under').",
                "As Mach number increases into transonic ranges, the center of lift shifts aft, creating a nose-down pitch moment called 'tuck under'. Mach Trim moves the stabilizer leading edge down (or elevator up) to compensate and restore static longitudinal stability.",
                "Remember 'tuck under' when flying near the speed of sound."
            },
            {
                "What is the bank angle threshold that determines whether Heading Hold or Roll Attitude Hold is engaged when activating the autopilot?",
                {"30 degrees of bank", "5 degrees of bank", "15 degrees of bank"},
                "5 degrees of bank",
                "If the bank angle is less than 5 degrees upon AP engagement, the system levels wings and holds the current heading. If the bank angle is 5 degrees or greater, it maintains the existing roll attitude.",
                "The standard boundary between wings-level heading hold and turn hold is 5 degrees."
            },
            {
                "What is 'Supervisory Override' in autopilot systems equipped with Control Wheel Steering (CWS)?",
                {"Applying manual force on the control wheel causes the AP to disengage permanently with an alarm.", "Manual control forces switch the system into CWS without disconnecting the AP, allowing pilot attitude modification and re-synchronization upon release.", "The autopilot ignores all pilot force inputs completely using mechanical interlocks."},
                "Manual control forces switch the system into CWS without disconnecting the AP, allowing pilot attitude modification and re-synchronization upon release.",
                "Supervisory Override allows the pilot to override the AP by exerting force on the controls. The AP suspends upper modes, transitions smoothly to CWS, accepts the new attitude or flight parameter at release, and returns to active command tracking without tripping off.",
                "Pilot assists or intervenes temporarily without tripping the AP offline."
            },
            {
                "Why is Lift Compensation (Versine compensation) cross-coupled from the roll channel into the pitch channel during coordinated turns?",
                {"To tilt the horizontal stabilizer during taxiing.", "To prevent altitude loss during banked turns by deflecting the elevator proportional to the bank angle to compensate for the tilted lift vector.", "To reduce engine thrust whenever the ailerons are deflected."},
                "To prevent altitude loss during banked turns by deflecting the elevator proportional to the bank angle to compensate for the tilted lift vector.",
                "When an aircraft banks, the lift vector tilts and its vertical component decreases. The cross-coupling automatically commands elevator nose-up deflection proportional to roll angle (1 - cos Phi) to maintain altitude without waiting for sluggish vertical speed errors.",
                "Banking loses vertical lift; elevator must pull up to compensate."
            },
            {
                "What is the fundamental operating philosophy regarding airspeed control priority between the Autopilot Pitch Channel and the Auto-throttle/Auto-thrust System (ATS)?",
                {"Both systems simultaneously adjust airspeed independently.", "Priority for airspeed control belongs to the Autopilot Pitch Channel; if pitch is assigned another task (e.g., ALT HOLD), speed control is delegated to the ATS.", "The ATS always has exclusive priority over airspeed and pitch never influences velocity."},
                "Priority for airspeed control belongs to the Autopilot Pitch Channel; if pitch is assigned another task (e.g., ALT HOLD), speed control is delegated to the ATS.",
                "Only one system can control speed at a time. The AP pitch channel has primary priority (e.g., in climb/descent via pitch/flight path angle). When pitch is dedicated to a spatial path (ALT, G/S, V/S), it delegates airspeed control to ATS thrust.",
                "Pitch controls speed during Level Change; Throttles control speed during Altitude Hold."
            },
            {
                "In Level Change (LVL CHG) mode during a climb, what are the operating modes of the AP Pitch Channel and the Auto-throttle System?",
                {"AP Pitch Channel controls airspeed; Auto-throttle sets maximum climb thrust limit.", "AP Pitch Channel maintains altitude; Auto-throttle controls vertical speed.", "AP Pitch Channel sets idle thrust; Auto-throttle maintains vertical path angle."},
                "AP Pitch Channel controls airspeed; Auto-throttle sets maximum climb thrust limit.",
                "During a climb in LVL CHG mode, ATS sets full climb thrust rating, while the autopilot pitch channel adjusts elevator deflection to maintain the target airspeed/Mach number.",
                "Throttles clamped at climb power; elevator pitches to hold speed."
            },
            {
                "What is the 'Soft Altitude' (Energy Trade) function utilized in modern Altitude Hold modes?",
                {"A mode that drops landing gear whenever minor turbulence occurs.", "A feature that permits minor altitude variations (approx. +/- 100 ft) during speed fluctuations (< 4 kts) to exchange kinetic and potential energy, smoothing engine thrust and saving fuel.", "A landing mode that softens the touch-down on unpaved runways."},
                "A feature that permits minor altitude variations (approx. +/- 100 ft) during speed fluctuations (< 4 kts) to exchange kinetic and potential energy, smoothing engine thrust and saving fuel.",
                "Soft Altitude mode avoids rapid throttle hunting by trading small amounts of airspeed for altitude (+/- 100 ft for +/- 4 kts). This reduces engine wear, saves fuel, and improves passenger comfort.",
                "Trade small kinetic energy (speed) for potential energy (altitude) instead of surging engines."
            },
            {
                "Why is a 'Washout' filter incorporated into the navigation control loop during VOR and Localizer On-Course tracking?",
                {"To filter out high-frequency radio noise from VHF transmitters.", "To eliminate crosswind stand-off errors by slowly decaying steady heading error signals to zero, allowing the navigation deviation signal to establish the proper wind correction (crab) angle.", "To disconnect the autopilot when flying directly over a mountain ridge."},
                "To eliminate crosswind stand-off errors by slowly decaying steady heading error signals to zero, allowing the navigation deviation signal to establish the proper wind correction (crab) angle.",
                "Without a washout filter, a steady heading error opposing a VOR/LOC deviation results in a constant parallel offset (stand-off). The washout acts as a long-time-constant differentiator that fades out steady heading error, allowing true crab angle tracking.",
                "Washout washes away steady heading offsets so the plane can crab into the crosswind."
            },
            {
                "How does the VOR mode handle flight through the 'Cone of Confusion' directly above a VOR ground station?",
                {"It disengages the autopilot immediately with a continuous master warning.", "The Over Station Sensor detects rapid deviation rate (> 8 mV/s or > 0.5 deg/s) and temporarily switches the roll controller to heading hold for the cone passage plus 20 seconds.", "It forces the aircraft into an immediate 360-degree holding turn."},
                "The Over Station Sensor detects rapid deviation rate (> 8 mV/s or > 0.5 deg/s) and temporarily switches the roll controller to heading hold for the cone passage plus 20 seconds.",
                "Directly overhead a VOR beacon, radial signals fluctuate erratically. The system locks onto the current heading for the duration of the cone passage plus a 20-second delay, then re-arms radial tracking.",
                "Freeze current heading over the cone until signal stabilizes 20s later."
            },
            {
                "What special geometric problem in ILS Glideslope tracking occurs as the aircraft approaches the runway threshold, and how is it named?",
                {"Ground clutter; compensated by switching to barometric altimeter.", "Beam Convergence (funnel effect); angular deviation corresponds to smaller linear distance, increasing loop gain and risking instability.", "Doppler shift; compensated by lowering engine RPM."},
                "Beam Convergence (funnel effect); angular deviation corresponds to smaller linear distance, increasing loop gain and risking instability.",
                "Because ILS beams are angular cones, the linear distance per degree of deviation shrinks as range decreases ('beam convergence'). Uncompensated, this increases feedback gain and induces oscillations; it is resolved via radio altitude estimation.",
                "Conical beam narrows near the runway threshold."
            },
            {
                "What is the main task of the Flare Sub-Mode during an automatic landing (Autoland)?",
                {"To accelerate engines to maximum TOGA thrust at touchdown.", "To continuously reduce the aircraft's sink rate from approach descent (~600-750 ft/min) to a positive touchdown rate (~120 ft/min) while raising the pitch attitude smoothly.", "To violently lock the rudder in center position at 100 ft AGL."},
                "To continuously reduce the aircraft's sink rate from approach descent (~600-750 ft/min) to a positive touchdown rate (~120 ft/min) while raising the pitch attitude smoothly.",
                "Flare mode initiates below 50 ft radio altitude, exponentially decreasing vertical speed to ensure a smooth, positive touchdown without tail-strike or bouncing.",
                "Cushioning the descent from ~700 ft/min down to ~120 ft/min."
            },
            {
                "Why does the autoland Flare controller intentionally add a small height bias (e.g. H1 = -20 ft) to the radio altitude calculation?",
                {"To fool the flight data recorder into logging a softer landing.", "To overcome the lift-increasing Ground Effect near the runway surface and guarantee a positive touchdown rather than floating indefinitely.", "To ensure the nose wheel impacts the ground prior to the main gear."},
                "To overcome the lift-increasing Ground Effect near the runway surface and guarantee a positive touchdown rather than floating indefinitely.",
                "Ground effect reduces sink rate and causes float. The flare controller commands sink rate towards a virtual target below the runway surface (-20 ft), ensuring firm wheel contact for weight-on-wheels switches and wheel spin-up.",
                "Targeting slightly below ground level prevents floating on the ground cushion."
            },
            {
                "What is the purpose of the 'Yaw Align' (Decrab) phase during an autoland approach in crosswind conditions?",
                {"To deploy thrust reversers prior to touchdown.", "To align the aircraft's longitudinal axis with the runway centerline heading before touchdown, eliminating the crab angle formed during approach.", "To bank the wings 30 degrees to match the localizer slope."},
                "To align the aircraft's longitudinal axis with the runway centerline heading before touchdown, eliminating the crab angle formed during approach.",
                "During a crosswind approach, the aircraft tracks the runway with a crab angle. Below 30 ft radio altitude, the yaw channel applies rudder to align the fuselage with runway heading so side loads on landing gear are avoided.",
                "Kicking out the crab angle with rudder right before touchdown."
            },
            {
                "What occurs in the Pitch Rollout Sub-Mode immediately following main gear touchdown in an autoland sequence?",
                {"The elevator is pushed full nose down to lock brakes instantly.", "The pitch attitude is derotated at a constant controlled pitch rate (~ -2 to -3 deg/s) to lower the nose gear smoothly onto the runway while deactivating auto-trim.", "The autopilot instantly disengages and trims full nose-up."},
                "The pitch attitude is derotated at a constant controlled pitch rate (~ -2 to -3 deg/s) to lower the nose gear smoothly onto the runway while deactivating auto-trim.",
                "Pitch rollout executes a smooth derotation rate (~ -2.5 deg/s) to lower the nose gear onto the tarmac, reducing residual lift and preventing auto-trim from driving the stabilizer out of trim.",
                "Controlled derotation rate lowers the nose wheel; auto-trim is inhibited."
            },
            {
                "In Airbus aircraft equipped with the Speed Reference System (SRS), what is the primary vertical flight guidance parameter during Take-off and Go-Around?",
                {"Barometric altitude rate only.", "Speed Reference Control Law based on Total Energy Management (balancing potential and actual flight path angles).", "Fixed elevator angle independent of acceleration."},
                "Speed Reference Control Law based on Total Energy Management (balancing potential and actual flight path angles).",
                "SRS calculates potential flight path angle from longitudinal/vertical accelerations and compares it with actual flight path angle and speed errors, commanding an optimum climb pitch attitude that protects V2 / target speed.",
                "Total Energy Management = potential vs actual flight path angle."
            },
            {
                "What is the functional difference between an Auto-throttle System and an Auto-thrust System?",
                {"Auto-throttle uses servomotors and clutches to physically move the thrust levers, whereas Auto-thrust commands engine computers (FADEC/ECU) electronically via data bus without moving levers.", "Auto-throttle only works on propeller aircraft, while Auto-thrust is for helicopters.", "Auto-thrust requires manual fuel mixture adjustment by the pilot."},
                "Auto-throttle uses servomotors and clutches to physically move the thrust levers, whereas Auto-thrust commands engine computers (FADEC/ECU) electronically via data bus without moving levers.",
                "Traditional Auto-throttle mechanically repositions throttle levers using servo drives. Modern Airbus Auto-thrust uses stationary thrust levers in detents and electronically commands the FADEC/ECU via digital bus.",
                "Moving levers (Boeing classic/current) vs fixed lever detents with digital bus command (Airbus modern)."
            },
            {
                "Why is longitudinal acceleration (XACC) fed into the Auto-throttle Speed/Mach control loop as a feedback bias?",
                {"To measure turbulence severity for weather radar.", "To provide anticipatory damping that prevents throttle overshooting and surging caused by aircraft inertia and airspeed lag.", "To disconnect the engines if reverse thrust is selected in flight."},
                "To provide anticipatory damping that prevents throttle overshooting and surging caused by aircraft inertia and airspeed lag.",
                "Aircraft have large inertia; when accelerating towards a target speed, waiting for the speed error alone to drop causes overshoot. XACC biases the error signal to retard throttles early, giving smooth speed capture without hunting.",
                "Acceleration anticipation stops throttle surging before reaching target speed."
            },
            {
                "Under JAR-AWO regulations, what restriction applies to the Autopilot APPROACH/LAND or GO-AROUND modes below 400 ft AGL?",
                {"The modes cannot be disengaged by pressing mode pushbuttons or selecting other upper modes; they can only be superseded by GO-AROUND or AP disconnect.", "The autopilot automatically disconnects with an emergency horn.", "The pilot must switch all flight directors OFF immediately."},
                "The modes cannot be disengaged by pressing mode pushbuttons or selecting other upper modes; they can only be superseded by GO-AROUND or AP disconnect.",
                "Below 400 ft AGL in approach/land mode, the mode locks in to ensure flight safety during the critical landing window. It cannot be cancelled by accidental button pushes—only by initiating Go-Around (TOGA) or disengaging the autopilot entirely.",
                "Mode locking below 400 ft prevents inadvertent mode dropouts near the ground."
            },
            {
                "During a Go-Around manoeuvre, what speed target protection is maintained if an engine failure is detected?",
                {"The speed target is immediately increased to VMO.", "The controller targets V2 (Takeoff Safety Speed) or retains the current speed if already higher than V2.", "The autopilot forces the aircraft into an immediate pitch-down glide."},
                "The controller targets V2 (Takeoff Safety Speed) or retains the current speed if already higher than V2.",
                "If an engine fails during Go-Around/Take-Off, the flight guidance logic drops the speed target to V2 (or maintains current speed if between V2 and V2+15), guaranteeing minimum safe climb gradient.",
                "One engine out in climb -> fly V2 safe speed."
            }

    };
}