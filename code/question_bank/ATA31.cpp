#include <vector>
#include "question.h"

std::vector<Question> getATA31Questions() {
    return {
        // ata 31
        {
            "According to ICAO Standard Atmosphere (ISA) definitions, what are the exact standard values at Mean Sea Level (MSL)?",
            {"Temperature: 15°C, Air Pressure: 1013.25 hPa, Air Density: 1.225 kg/m3", "Temperature: 0°C, Air Pressure: 1000 hPa, Air Density: 1.000 kg/m3", "Temperature: 20°C, Air Pressure: 1013.25 hPa, Air Density: 1.250 kg/m3"},
            "Temperature: 15°C, Air Pressure: 1013.25 hPa, Air Density: 1.225 kg/m3",
            "Under the International Standard Atmosphere (ISA) established by ICAO, sea level values are defined as 15°C (59°F), 1013.25 hPa (29.92 inHg), and a density of 1.225 kg/m3.",
            "Think of standard sea level temperature in Celsius and 1013.25 hectopascals."
        },
        {
            "Which instruments were defined as the RAF 'Basic Six' panel configuration in 1937?",
            {"Airspeed indicator, artificial horizon, variometer, altimeter, directional gyro, and turn and bank indicator", "Airspeed indicator, machmeter, altimeter, engine RPM, EGT, and fuel flow", "Altimeter, PFD, ND, clock, turn coordinator, and magnetic compass"},
            "Airspeed indicator, artificial horizon, variometer, altimeter, directional gyro, and turn and bank indicator",
            "In 1937 the RAF decided on six essential instruments for flying according to IMC: airspeed indicator, artificial horizon, variometer, altimeter, directional gyro, and turn and bank indicator.",
            "Consider the classic 6 blind-flying instruments introduced prior to WWII."
        },
        {
            "In the standardized 'Basic T' cockpit arrangement, where is the altimeter located relative to the attitude indicator?",
            {"To the left of the attitude indicator", "Directly below the attitude indicator", "To the right of the attitude indicator"},
            "To the right of the attitude indicator",
            "In the Basic T configuration, the attitude indicator is in the middle top position, the airspeed indicator is to its left, the altimeter is to its right, and the compass/directional gyro is below it.",
            "Airspeed is on the left; what is on the right?"
        },
        {
            "What is Calibrated Airspeed (CAS)?",
            {"Indicated Airspeed corrected for instrument error and static source error", "True Airspeed corrected for compressibility only", "The direct uncorrected speed readout from a simple bellows mechanism"},
            "Indicated Airspeed corrected for instrument error and static source error",
            "CAS is the Indicated Airspeed (IAS) corrected for instrument error and static source error (SSE), typically computed by an Air Data Computer (ADC).",
            "It accounts for position/source errors and instrument mechanics."
        },
        {
            "What is Equivalent Airspeed (EAS)?",
            {"CAS corrected for compressibility error", "IAS corrected only for temperature changes", "True speed relative to the surrounding undisturbed air mass"},
            "CAS corrected for compressibility error",
            "When compressibility error is compensated in the air data calculator/computer, the resulting value is called Equivalent Airspeed (EAS).",
            "Compressibility effects at high speeds convert CAS to this intermediate value."
        },
        {
            "What is the residual pressure inside an aneroid barometer capsule to compensate for metal elasticity changes?",
            {"Approximately 1013 mbar", "Approximately 5 mbar (500 Pa)", "Complete 0 mbar absolute vacuum"},
            "Approximately 5 mbar (500 Pa)",
            "The residual pressure inside the capsule of an aneroid barometer is kept at about 5 mbar (5 hPa / 500 Pa) to compensate for changes in metal elasticity caused by temperature fluctuations.",
            "It is a very small non-zero residual pressure."
        },
        {
            "How does a Bourdon tube convert pressure into a mechanical displacement?",
            {"The internal pressure tries to change its oval cross section to a circular cross section, straightening the tube", "The bellows expand linearly along their longitudinal axis via internal gas heating", "The liquid inside evaporates and increases volume proportionally"},
            "The internal pressure tries to change its oval cross section to a circular cross section, straightening the tube",
            "Applying pressure inside the Bourdon tube causes its oval cross section to tend toward a circular shape, which straightens the curved tube and moves its tip proportionally.",
            "Think about what happens to a curved oval tube under internal pressure."
        },
        {
            "What is the physical operational principle of a vibrating cylinder pressure transducer?",
            {"Output frequency changes depending on the applied input pressure affecting natural resonance", "Electrical resistance changes due to mercury expansion in a capillary", "Variable capacitance changes by sliding an iron core inside a coil"},
            "Output frequency changes depending on the applied input pressure affecting natural resonance",
            "The vibrating pressure transducer uses a cylinder excited by a drive coil to its natural frequency; applying pressure changes this natural resonance frequency, measured by a pickup coil.",
            "Resonance and frequency shift are key."
        },
        {
            "How is dynamic pressure (ram pressure 'q') calculated in a pneumatic flight instrument system?",
            {"q = Ptot - Ps", "q = Ptot + Ps", "q = Ps / Ptot"},
            "q = Ptot - Ps",
            "Pitot/total pressure consists of static pressure plus dynamic pressure (Ptot = q + Ps). Therefore, dynamic pressure is calculated as q = Ptot - Ps.",
            "Dynamic pressure is the difference between total pressure and ambient static pressure."
        },
        {
            "What colour identification coding is standard for Pitot and Static maintenance connection lines?",
            {"Pitot: Red, Static: Yellow", "Pitot: Blue, Static: Green", "Pitot: Yellow, Static: Red"},
            "Pitot: Red, Static: Yellow",
            "During maintenance and piping identification, all connections are designated with specific colors: pitot lines are red and static lines are yellow.",
            "Pitot is red like high dynamic energy, static is yellow."
        },
        {
            "What occurs to the airspeed indication if a static port leak occurs in an UNPRESSURIZED cabin during flight?",
            {"The Airspeed Indicator shows a slightly higher indicated airspeed due to cabin venturi lower pressure", "The Airspeed Indicator drops immediately to zero", "The Airspeed Indicator reads significantly lower than actual"},
            "The Airspeed Indicator shows a slightly higher indicated airspeed due to cabin venturi lower pressure",
            "In an unpressurized cabin in flight, the cabin pressure is slightly lower than ambient static pressure due to the venturi effect. A static leak causes a slightly lower static reading, increasing indicated airspeed and altitude.",
            "A lower sensed static pressure increases differential pressure (q = Ptot - Ps)."
        },
        {
            "What happens to the Altimeter and Airspeed Indicator if the static line leaks inside a PRESSURIZED cabin?",
            {"Both Altimeter and Airspeed Indicator indications decrease", "Both Altimeter and Airspeed Indicator indications increase", "Altimeter increases while Airspeed drops to zero"},
            "Both Altimeter and Airspeed Indicator indications decrease",
            "Inside a pressurized cabin, cabin pressure is higher than outside ambient static pressure. Higher static pressure entering the line causes both the altimeter and airspeed indicator to under-read (decrease).",
            "Higher static pressure inside a pressurized cabin suppresses altimeter and airspeed readings."
        },
        {
            "During a climb, how does an Airspeed Indicator behave if the static port is completely blocked by ice while the pitot tube remains clear?",
            {"Airspeed indication decreases continuously", "Airspeed indication increases abnormally and acts like an altimeter", "Airspeed remains completely frozen at the cruise speed"},
            "Airspeed indication decreases continuously",
            "During a climb with a blocked static port, trapped static pressure remains high while pitot pressure decreases naturally with altitude and speed, leading to a decreasing indicated airspeed.",
            "Ptot decreases during climb at fixed speed, but trapped Ps does not decrease."
        },
        {
            "What happens to an Airspeed Indicator in climb if the pitot tube inlet AND drain hole are BOTH completely blocked?",
            {"The Airspeed Indicator indication increases and acts like an altimeter", "The Airspeed Indicator immediately drops to zero", "The Airspeed Indicator remains accurately calibrated"},
            "The Airspeed Indicator indication increases and acts like an altimeter",
            "When the pitot tube and drain are totally blocked, total pressure remains trapped. As the aircraft climbs, ambient static pressure decreases, causing (Ptot_trapped - Ps) to increase, making the ASI act like an altimeter.",
            "Trapped total pressure minus decreasing static pressure equals an increasing delta."
        },
        {
            "What happens to the Airspeed Indicator if the pitot tube inlet is blocked by ice, but the water drain hole remains OPEN?",
            {"Airspeed indication decreases to zero", "Airspeed increases into the overspeed range", "Airspeed locks at the last recorded speed value"},
            "Airspeed indication decreases to zero",
            "If the pitot inlet is blocked while the drain hole remains open, pitot pressure bleeds off through the drain to ambient static pressure. With Ptot equal to Ps, the differential pressure is zero, so the ASI indicates zero.",
            "Without incoming ram air, pressure vents until Ptot equals Ps."
        },
        {
            "What is the QNH altimeter setting definition?",
            {"Altimeter sub-scale set to current sea level pressure so it indicates airfield elevation on the ground", "Altimeter sub-scale set to station pressure so it reads zero on the ground", "Altimeter sub-scale set to standard 1013.25 hPa for cruise above transition altitude"},
            "Altimeter sub-scale set to current sea level pressure so it indicates airfield elevation on the ground",
            "QNH sets the current barometric pressure corrected to mean sea level; on the ground the altimeter displays the airfield elevation above MSL.",
            "QNH displays Nautical Height (elevation above MSL)."
        },
        {
            "What is the altimeter setting code for standard pressure (1013.25 hPa / 29.92 inHg)?",
            {"QNE", "QNH", "QFE"},
            "QNE",
            "QNE is the standard pressure setting of 1013.25 hPa (29.92 inHg), used above the transition altitude to ensure vertical separation in Flight Levels (FL).",
            "Think of standard Flight Level pressure setting."
        },
        {
            "What is the purpose of an Encoding Altimeter in smaller aircraft?",
            {"Provides digitized altitude signals to the ATC transponder system for ground radar reporting", "Electrically drives the primary attitude gyro during aerobatics", "Calculates engine fuel flow based on ambient pressure"},
            "Provides digitized altitude signals to the ATC transponder system for ground radar reporting",
            "An encoding altimeter has additional internal mechanisms/connectors to provide altitude reporting data directly to the ATC transponder.",
            "It supplies the 'Mode C' altitude report to ATC."
        },
        {
            "What defines the VNO speed limit on an aeroplane airspeed indicator?",
            {"Maximum structural cruising speed / maximum speed for normal operations", "Stall speed in landing configuration with flaps and gear down", "Never exceed speed under any circumstances"},
            "Maximum structural cruising speed / maximum speed for normal operations",
            "VNO is the maximum normal operating/cruising airspeed; exceeding it is only permitted in smooth air with caution (yellow arc).",
            "V_Normal_Operating."
        },
        {
            "How is the Mach number mathematically defined in air data calculations?",
            {"M = TAS / a (Speed of aircraft divided by speed of sound)", "M = IAS / CAS", "M = Total Pressure / Dynamic Pressure"},
            "M = TAS / a (Speed of aircraft divided by speed of sound)",
            "The Mach number M is the ratio of the true airspeed (TAS) to the local speed of sound (a), where the speed of sound depends primarily on temperature.",
            "Ratio of true airspeed to local acoustic velocity."
        },
        {
            "What two types of bellows are mechanically combined inside a pneumatic Machmeter?",
            {"Differential pressure bellows (airspeed) and aneroid bellows (altitude)", "Two identical evacuated aneroid bellows in series", "Bourdon tube and a liquid thermometer capillary"},
            "Differential pressure bellows (airspeed) and aneroid bellows (altitude)",
            "A pneumatic Machmeter integrates airspeed differential bellows (measuring dynamic pressure) and evacuated aneroid bellows (measuring static pressure/altitude).",
            "It needs both airspeed and altitude inputs."
        },
        {
            "What components establish the time delay in a classic aneroid Vertical Speed Indicator (variometer)?",
            {"A calibrated capillary tube regulating static pressure flow into the airtight casing", "A spring-loaded turbine wheel driven by ram air", "A magnetic eddy current damper attached to the pointer spindle"},
            "A calibrated capillary tube regulating static pressure flow into the airtight casing",
            "In a classic VSI, static pressure enters the bellows directly, while the casing receives static pressure delayed through a narrow capillary tube, creating a temporary differential pressure during climb/descent.",
            "A narrow restriction delays pressure change outside the bellows."
        },
        {
            "How does an Instantaneous Vertical Speed Indicator (IVSI) eliminate the initial indication time lag?",
            {"By utilizing an internal inertia-driven acceleration piston/pump", "By connecting directly to the pitot ram air line", "By heating the capillary tube with an electric resistor"},
            "By utilizing an internal inertia-driven acceleration piston/pump",
            "An IVSI uses spring-loaded acceleration dashpot pistons that immediately displace air into/out of the capsule when vertical acceleration begins, providing instantaneous response.",
            "Inertial acceleration pistons generate instantaneous pressure changes."
        },
        {
            "What is the mathematical relationship between Total Air Temperature (TAT) and Static Air Temperature (SAT)?",
            {"TAT = SAT + Ram Rise (RR), where RR = SAT * 0.2 * M^2 (Kelvin)", "TAT = SAT - Ram Rise (RR)", "TAT = SAT / (1 + 0.2 * M^2)"},
            "TAT = SAT + Ram Rise (RR), where RR = SAT * 0.2 * M^2 (Kelvin)",
            "Total Air Temperature is the sum of static ambient temperature and ram rise caused by adiabatic air compression: TAT = SAT * (1 + 0.2 * M^2) in Kelvin.",
            "Ram compression always increases temperature above static ambient."
        },
        {
            "What is the primary advantage of an aspirated TAT probe utilizing bleed air?",
            {"Eliminates ground solar radiation and aircraft skin heat radiation errors when stationary or taxiing", "Prevents high-altitude Mach compressibility errors", "Permits direct measurement of cabin differential pressure"},
            "Eliminates ground solar radiation and aircraft skin heat radiation errors when stationary or taxiing",
            "Aspirated TAT probes draw ambient air across the sensor using bleed-air ejectors while on the ground, preventing false high readings caused by solar heating and hot skin.",
            "It draws ambient air over the element on ground."
        },
        {
            "What failure indication appears if a break occurs in the measuring wire of a PTC TAT probe sensor?",
            {"Resistance becomes infinitely high, indicating maximum positive scale limit (+50°C upper stop)", "Resistance becomes 0 ohms, indicating -70°C lower stop", "The indicator pointer locks at exactly 0°C"},
            "Resistance becomes infinitely high, indicating maximum positive scale limit (+50°C upper stop)",
            "Because the sensor is a positive temperature coefficient (PTC) resistor, an open circuit represents infinite resistance, driving the display to its maximum positive temperature stop (+50°C).",
            "Higher resistance in a PTC represents higher temperature."
        },
        {
            "What is the function of an Air Data Module (ADM) in modern aircraft architectures?",
            {"Converts pneumatic pressure (pitot/static) close to the probes into digital signals transmitted via data buses", "Calculates flight management navigation routes using GPS signals", "Directly drives the mechanical standby altimeter pointer via a flexible cable"},
            "Converts pneumatic pressure (pitot/static) close to the probes into digital signals transmitted via data buses",
            "ADMs contain piezoresistive/solid-state pressure transducers located near the probes to convert pneumatic pressures directly into ARINC 429 digital data words, eliminating long pneumatic tubing.",
            "Converts pressure to digital close to the source."
        },
        {
            "What three standalone standby instruments are replaced by an Integrated Standby Instrument System (ISIS)?",
            {"Standby altimeter, standby horizon indicator, and standby airspeed indicator", "Turn coordinator, VSI, and magnetic compass", "PFD, ND, and engine display"},
            "Standby altimeter, standby horizon indicator, and standby airspeed indicator",
            "An ISIS combines the backup attitude indicator (artificial horizon), standby altimeter, and standby airspeed indicator into a single integrated solid-state LCD unit.",
            "Attitude, altitude, and airspeed."
        },
        {
            "What happens when an external force attempts to change the direction of a spinning mechanical gyroscope rotor axis?",
            {"The gyroscope precesses at an angle 90° displaced in the direction of rotor rotation", "The rotor tilts immediately and purely in the direct plane of the applied force", "The rotor stops spinning instantly due to bearing friction"},
            "The gyroscope precesses at an angle 90° displaced in the direction of rotor rotation",
            "Gyroscopic precession causes an applied force to manifest as a resultant movement displaced 90 degrees forward in the direction of rotor rotation.",
            "Precession occurs 90 degrees after the applied torque in the direction of spin."
        },
        {
            "What is apparent drift in a free directional gyroscope caused by Earth's rotation?",
            {"Horizontal wander equal to 15° * sin(latitude) per hour", "Vertical topple equal to 15° * cos(latitude) per hour", "Mechanical bearing friction causing random gyro topple"},
            "Horizontal wander equal to 15° * sin(latitude) per hour",
            "Due to Earth's rotation (15°/hour), an unslaved horizontal gyro exhibits apparent drift (horizontal wander) proportional to the sine of the geographical latitude: 15°/h * sin(lat).",
            "Earth rotation rate times sine of latitude."
        },
        {
            "What is the purpose of the 'dither mechanism' in a Ring Laser Gyro (RLG)?",
            {"To prevent the lock-in effect at very low rotation rates by vibrating the gyro block", "To focus the laser beam onto the cathode mirror", "To calibrate the barometric altitude scale electronically"},
            "To prevent the lock-in effect at very low rotation rates by vibrating the gyro block",
            "At near-zero rotation rates, counter-propagating laser frequencies lock together (lock-in effect). The dither motor mechanically oscillates the gyro block at 10-100 Hz to prevent this deadband.",
            "High-frequency microscopic oscillation avoids beam frequency locking."
        },
        {
            "What is the optical operating principle utilized by both Ring Laser Gyros and Fibre Optic Gyros?",
            {"Sagnac Effect", "Doppler-Fizeau Effect", "Piezoelectric Resonance Effect"},
            "Sagnac Effect",
            "Optical gyros operate on the Sagnac Effect: rotation causes a path length differential between counter-propagating light beams, resulting in measurable interference phase shifts.",
            "Phase shift between clockwise and counter-clockwise light beams."
        },
        {
            "What is the operational purpose of an aircraft Angle of Attack (AOA) stall warning stick shaker?",
            {"Artificially alert the flight crew of an imminent stall by vibrating the control column", "Automatically deploy emergency speedbrakes during high-speed dives", "Electrically cage the vertical gyro during steep turns"},
            "Artificially alert the flight crew of an imminent stall by vibrating the control column",
            "If an aircraft approaches its critical angle of attack (alpha max) without natural pre-stall aerodynamic buffet, the stall warning computer activates an unbalanced electric stick shaker motor on the yoke.",
            "Tactile warning on the pilot control column."
        },
        {
            "In a classic Altitude Alerting System, what are the typical trigger thresholds for Approach and Deviation modes?",
            {"Approach alert: within 900 ft to 300 ft of selected altitude; Deviation alert: exceeding 300 ft from selected altitude", "Approach alert: within 2000 ft; Deviation alert: exceeding 1000 ft", "Approach alert: within 100 ft; Deviation alert: exceeding 50 ft"},
            "Approach alert: within 900 ft to 300 ft of selected altitude; Deviation alert: exceeding 300 ft from selected altitude",
            "The altitude alert sounds/illuminates approaching the target between 900 ft and 300 ft Δh, and triggers a deviation warning if departing the selected altitude by more than ±300 ft.",
            "900 feet approach and 300 feet deviation threshold."
        },
        {
            "What are the mandatory minimum continuous recording durations for modern commercial SSFDR and CVR systems?",
            {"FDR: 25 hours; CVR: 2 hours (or older 30/60 minutes)", "FDR: 2 hours; CVR: 24 hours", "FDR: 100 hours; CVR: 10 hours"},
            "FDR: 25 hours; CVR: 2 hours (or older 30/60 minutes)",
            "Under commercial aviation standards, a Solid State Flight Data Recorder (SSFDR) must retain at least the last 25 hours of operation, while cockpit voice data is preserved for 60 to 120+ minutes.",
            "25 hours for flight data parameters."
        },
        {
            "What are the operational specifications of the Underwater Locator Beacon (ULB) attached to a flight data recorder?",
            {"Transmits at 40 kHz, operable to 6000 m depth, minimum operating life of 90 days", "Transmits at 121.5 MHz, operable to 100 m depth, minimum operating life of 24 hours", "Transmits at 1000 kHz, operable to 500 m depth, minimum operating life of 30 days"},
            "Transmits at 40 kHz, operable to 6000 m depth, minimum operating life of 90 days",
            "The water-activated acoustic ULB pulse generator operates at 40 kHz, withstands ocean depths down to 6000 meters (>3000 m certified), and transmits for at least 90 days continuously.",
            "40 kHz ultrasonic signal lasting 90 days."
        },
        {
            "What is the function of a Quick Access Recorder (QAR) compared to a Crash-Survivable DFDR?",
            {"Provides easily accessible identical flight data on removable media for routine airline maintenance/operational analysis without crash-hardening", "Replaces the digital flight data recorder for legal incident investigations", "Transmits real-time audio from passenger cabin microphones to ground ATC"},
            "Provides easily accessible identical flight data on removable media for routine airline maintenance/operational analysis without crash-hardening",
            "The QAR captures the same flight data parameters as the DFDR onto convenient media (e.g., PCMCIA, optical disk, or wireless cellular WQAR) for flight ops quality monitoring (FOQA/ACMS).",
            "Non-crash-protected recorder for airline engineering analysis."
        },
        {
            "What primary parameters are monitored by a helicopter Health and Usage Monitoring System (HUMS)?",
            {"Vibrations, component speeds, temperatures, pressures, and structural usage limits", "Cabin entertainment audio and passenger Wi-Fi data traffic", "Galley electrical load balance and water tank quantity"},
            "Vibrations, component speeds, temperatures, pressures, and structural usage limits",
            "HUMS continuously gathers vibration, shaft speed, oil particle detection, and flight envelope data across gearboxes, driveshafts, and main/tail rotor heads to track component health and fatigue life.",
            "Vibration, rotor dynamics, transmission health, and lifecycle logging."
        },
        {
            "Why must maintenance personnel NEVER remove or disturb a mechanical gyroscope spinning down at intermediate speeds (e.g. ~3 minutes after power off)?",
            {"The gyro will flounder with high precessional loads, destroying delicate gimbal frame bearings", "The high back-EMF voltage will cause an electric shock hazard to the technician", "The internal mercury switches will spill and contaminate the avionics bay"},
            "The gyro will flounder with high precessional loads, destroying delicate gimbal frame bearings",
            "When running down at medium speed, the rotor lacks full rigidity but has enough momentum to precess violently if moved, causing severe tumbling ('floundering') that destroys bearings.",
            "Partial gyroscopic stability causes gimbal bearing damage during handling."
        },
        {
            "What precaution must be strictly observed regarding Pitot and Static pressures during an Air Data Test on an aircraft?",
            {"Static pressure must never exceed Pitot pressure, and pressure change rates must not exceed limits (e.g., 6000 ft/min)", "Static pressure must always be at least 300 hPa higher than Pitot pressure", "Pitot heating must be kept continuously ON during dry pneumatic leak checks"},
            "Static pressure must never exceed Pitot pressure, and pressure change rates must not exceed limits (e.g., 6000 ft/min)",
            "During air data testing, Ps must never be greater than Ptot (to prevent reverse differential damage on airspeed capsules), and vertical speeds must remain within limits (e.g. max 6000 ft/min).",
            "Negative differential pressure (Ptot < Ps) damages airspeed indicators."
        }
    };

}