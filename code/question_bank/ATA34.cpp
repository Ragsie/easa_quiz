#include <vector>
#include "question.h"

std::vector<Question> getATA34Questions() {
    return {
        // ata 34
        {
            "Which navigation systems are primarily used for enroute navigation according to the manual?",
            {"ADF and VOR systems", "Glide slope and localizer systems", "Marker beacon and MLS systems"},
            "ADF and VOR systems",
            "ADF (the oldest system) and VOR (the most common system) are the two primary radio navigation systems used for enroute navigation.",
            "Think about long-range omnidirectional and non-directional beacons used across airways."
        },
        {
            "What is the difference between True North (TN) and Magnetic North (MN) called?",
            {"Variation", "Deviation", "Drift angle"},
            "Variation",
            "The angular difference between the direction to True North and Magnetic North is called variation (east or west).",
            "It relates to the geographical vs. magnetic poles of the Earth."
        },
        {
            "What is the difference between an aircraft's heading (HDG) and its track (TK) over ground?",
            {"Drift angle", "Variation", "Relative bearing"},
            "Drift angle",
            "Track is the actual path over the earth, whereas heading is where the nose points. The difference caused by wind is the drift angle.",
            "Consider the effect of crosswind pushing the aircraft off its heading."
        },
        {
            "How is Magnetic Bearing (QDM) calculated from Magnetic Heading (MH) and Relative Bearing (RB)?",
            {"QDM = MH + RB", "QDM = MH - RB", "QDM = RB - MH"},
            "QDM = MH + RB",
            "The magnetic bearing to the station (QDM) is obtained by adding the relative bearing (RB) to the magnetic heading (MH).",
            "Adding the relative angle from the aircraft nose to the aircraft's magnetic heading gives the magnetic direction to the station."
        },
        {
            "What does the Q-code 'QDR' represent in radio navigation?",
            {"Magnetic bearing from the ground station to the aircraft (radial)", "Magnetic bearing from the aircraft to the ground station", "True bearing from the ground station to the aircraft"},
            "Magnetic bearing from the ground station to the aircraft (radial)",
            "QDR is the magnetic bearing from the ground station to the aircraft, which corresponds to the VOR radial.",
            "QDR is 'from the station', while QDM is 'to the station'."
        },
        {
            "What navigation method determines the aircraft position using only distance measurements from multiple stations?",
            {"Rho-Navigation (Rho/Rho)", "Theta-Navigation (Theta/Theta)", "Doppler-Navigation"},
            "Rho-Navigation (Rho/Rho)",
            "Rho-navigation determines distances (Rho) to stations (e.g. DME/DME) and computes position at the intersection of range circles.",
            "Rho represents distance/radius from a ground aid."
        },
        {
            "What is the standard frequency range for the Automatic Direction Finder (ADF)?",
            {"190 kHz to 1750 kHz", "108.00 MHz to 117.95 MHz", "962 MHz to 1213 MHz"},
            "190 kHz to 1750 kHz",
            "The ADF system operates in the low to medium frequency band ranging from 190 kHz to 1750 kHz.",
            "ADF uses LF and MF bands (NDB and commercial AM broadcast stations)."
        },
        {
            "Why does the ADF system require a sense antenna in addition to a loop antenna?",
            {"To resolve the 180-degree bearing ambiguity", "To amplify the low-frequency audio ident signal", "To correct for aircraft fuselage quadrantal errors"},
            "To resolve the 180-degree bearing ambiguity",
            "A loop antenna pattern produces two nulls 180 degrees apart. Combining it with the omnidirectional sense antenna creates a cardioid pattern with a single null.",
            "Think about creating an unambiguous cardioid radiation pattern."
        },
        {
            "Why does the ADF receiver determine direction based on the signal minimum (null) rather than the maximum?",
            {"The rate of signal change around the null is sharper and more precise", "The maximum signal overloads the receiver RF amplifier", "The null eliminates interference from the sense antenna"},
            "The rate of signal change around the null is sharper and more precise",
            "Signal strength changes much more rapidly around the minimum than around the broad maximum, making null-seeking significantly more accurate.",
            "Sharp slope vs flat peak on a sine wave response."
        },
        {
            "What causes the Quadrantal Error in ADF systems, and how is it compensated?",
            {"Reflections/re-radiation from the aircraft fuselage bending incoming waves towards the longitudinal axis; compensated by a QEC", "Atmospheric thunderstorm discharge; compensated by a beat frequency oscillator", "Ionospheric night effect; compensated by switching to ANT mode"},
            "Reflections/re-radiation from the aircraft fuselage bending incoming waves towards the longitudinal axis; compensated by a QEC",
            "The metal fuselage acts as an antenna bending waves toward the longitudinal axis (especially around 45 degrees). A Quadrantal Error Corrector (QEC) adjusts the cosine/sine coil balance.",
            "The fuselage metal structure re-radiates received RF power."
        },
        {
            "What is the function of the Beat Frequency Oscillator (BFO / TONE) in an ADF receiver?",
            {"To make unmodulated carrier wave (A0/A1) Morse identification signals audible", "To filter out the 1020 Hz tone from background speech", "To calibrate the sense antenna against loop antenna phase shifts"},
            "To make unmodulated carrier wave (A0/A1) Morse identification signals audible",
            "When ground stations transmit Morse code by interrupting an unmodulated carrier wave (A0/A1), the BFO superimposes a tone to make the keyed carrier audible.",
            "Used for CW (continuous wave) transmissions without audio modulation."
        },
        {
            "What is the carrier frequency band allocated for VOR systems?",
            {"108.00 MHz to 117.95 MHz", "118.00 MHz to 136.975 MHz", "329.15 MHz to 335.00 MHz"},
            "108.00 MHz to 117.95 MHz",
            "VOR systems operate in the VHF frequency band between 108.00 MHz and 117.95 MHz with 50 kHz channel spacing.",
            "Between 108.00 and 117.95 MHz (with TVOR on even tenths below 112 MHz)."
        },
        {
            "In a Conventional VOR ground station, what are the modulations of the reference and variable signals?",
            {"Reference is 30 Hz FM on 9960 Hz subcarrier; Variable is 30 Hz AM from rotating dipole pattern", "Reference is 30 Hz AM; Variable is 30 Hz FM on 9960 Hz subcarrier", "Both reference and variable signals are 90 Hz and 150 Hz AM tones"},
            "Reference is 30 Hz FM on 9960 Hz subcarrier; Variable is 30 Hz AM from rotating dipole pattern",
            "In conventional VOR, the reference phase is 30 Hz FM modulated on a 9960 Hz subcarrier, while the variable phase is produced as 30 Hz AM via a rotating cardioid pattern.",
            "Conventional VOR uses FM reference and AM variable (inverted in DVOR)."
        },
        {
            "How does a Doppler VOR (DVOR) reduce site errors caused by reflections in mountainous terrain?",
            {"By interchanging the modulations and using a wide-aperture ring of dipoles to generate a 30 Hz FM variable phase via Doppler effect", "By increasing transmitter carrier power from 200 W to 2000 W", "By transmitting microwave pulsed signals in the C-band"},
            "By interchanging the modulations and using a wide-aperture ring of dipoles to generate a 30 Hz FM variable phase via Doppler effect",
            "DVOR uses a 13.5 m ring of 39 antennas to produce an FM variable phase via Doppler frequency shift, providing high immunity against multipath reflection errors.",
            "FM modulation on the variable signal provides much better signal-to-noise and multipath immunity."
        },
        {
            "According to ICAO Annex 10, what is the full deflection of a VOR deviation indicator?",
            {"+/- 10 degrees (typically 5 degrees per dot on a standard 2-dot display)", "+/- 2.5 degrees (1.25 degrees per dot)", "+/- 20 degrees (10 degrees per dot)"},
            "+/- 10 degrees (typically 5 degrees per dot on a standard 2-dot display)",
            "VOR full deflection is standardized by ICAO Annex 10 to +/- 10 degrees from the selected course/radial.",
            "Standard two dots each side represent 5 degrees per dot, totaling 10 degrees."
        },
        {
            "What is the 'zone of confusion' (or cone of silence) directly above a VOR station?",
            {"An inverted conical area above the station where horizontal polarization prevents reliable signal reception and TO/FROM indications fluctuate", "A zone where DME transmission suppression temporarily disables the VOR receiver", "The transition zone between Terminal VOR and High-Altitude VOR coverage"},
            "An inverted conical area above the station where horizontal polarization prevents reliable signal reception and TO/FROM indications fluctuate",
            "Because VOR antennas are horizontally polarized, there is a null cone directly above the station where signal is unreliable and TO/FROM switches.",
            "Radiation directly upwards from horizontal dipoles is minimal."
        },
        {
            "What audio frequencies are used to modulate the ILS Localizer lobes?",
            {"90 Hz on the left lobe and 150 Hz on the right lobe (facing the runway)", "150 Hz on the left lobe and 90 Hz on the right lobe", "30 Hz FM on the left and 30 Hz AM on the right"},
            "90 Hz on the left lobe and 150 Hz on the right lobe (facing the runway)",
            "Looking down the approach towards the runway, the left lobe is modulated with 90 Hz and the right lobe with 150 Hz.",
            "90 Hz is on the yellow/left side, 150 Hz is on the blue/right side."
        },
        {
            "What parameter is measured by an ILS receiver to determine lateral or vertical deviation from centerline?",
            {"Difference in Depth of Modulation (DDM)", "Phase difference between 30 Hz AM and FM signals", "Time delay of arrival of interrogation pulse pairs"},
            "Difference in Depth of Modulation (DDM)",
            "ILS uses DDM (Difference in Depth of Modulation) between 90 Hz and 150 Hz tones. On course centerline, DDM is zero.",
            "DDM = 0 represents the exact on-course centerline."
        },
        {
            "What is the standard DDM value for ILS Localizer full scale deflection according to ICAO Annex 10?",
            {"0.155 (15.5%)", "0.175 (17.5%)", "0.093 (9.3%)"},
            "0.155 (15.5%)",
            "Localizer full scale deflection is defined as a DDM of 0.155 (15.5%), whereas Glide Slope full scale deflection is 0.175 (17.5%).",
            "Localizer is 0.155, Glide Slope is 0.175."
        },
        {
            "How is the ILS Glide Slope receiver tuned in an aircraft?",
            {"Automatically paired with the selected Localizer VHF channel", "Manually by entering the UHF Glide Slope frequency (329.15 - 335.00 MHz) on the MCDU", "By setting the BFO switch to the GS position on the ACP"},
            "Automatically paired with the selected Localizer VHF channel",
            "Every LOC frequency has an internationally standardized paired UHF Glide Slope frequency. Tuning the LOC automatically tunes the GS receiver.",
            "Pilots only dial the VHF localizer frequency; GS frequency pairing is automatic."
        },
        {
            "What are the decision height (DH) and runway visual range (RVR) limits for a CAT II ILS approach?",
            {"DH of 100 ft and RVR of approximately 400 m", "DH of 200 ft and RVR of approximately 800 m", "DH below 100 ft and RVR less than 200 m"},
            "DH of 100 ft and RVR of approximately 400 m",
            "CAT I requires DH 200 ft / RVR 800 m; CAT II requires DH 100 ft / RVR 400 m; CAT III has DH < 100 ft / RVR < 200 m.",
            "CAT II is intermediate between standard CAT I (200 ft) and zero-visibility CAT III."
        },
        {
            "What is the carrier frequency and modulation tone of the ILS Outer Marker (OM)?",
            {"75 MHz carrier with 400 Hz tone (blue light, dashed Morse code)", "75 MHz carrier with 1300 Hz tone (amber light, dot-dash Morse code)", "75 MHz carrier with 3000 Hz tone (white light, dotted Morse code)"},
            "75 MHz carrier with 400 Hz tone (blue light, dashed Morse code)",
            "All marker beacons operate on 75 MHz. The Outer Marker is modulated with 400 Hz, lighting the blue/cyan indicator with continuous dashes.",
            "Outer Marker: 400 Hz (Blue/Cyan, low pitch dashes); Middle: 1300 Hz (Amber); Inner: 3000 Hz (White)."
        },
        {
            "What operating frequency band and multiplexing technique are used by the Microwave Landing System (MLS)?",
            {"5031 MHz to 5091 MHz (C-band) using Time Division Multiplexing (TDM / TRSB)", "108.10 MHz to 111.95 MHz using Frequency Division Multiplexing", "962 MHz to 1213 MHz using Jittered Pulse Amplitude Modulation"},
            "5031 MHz to 5091 MHz (C-band) using Time Division Multiplexing (TDM / TRSB)",
            "MLS operates on 200 channels in the microwave C-band (5.031 to 5.091 GHz) utilizing Time Reference Scanning Beam (TRSB) with TDM.",
            "MLS is a 5 GHz C-band system with Time Division Multiplexing."
        },
        {
            "How does an aircraft calculate its azimuth and elevation angles in an MLS system?",
            {"By measuring the time interval between the 'TO' scan pulse and the 'FRO' scan pulse", "By comparing the phase difference between 90 Hz and 150 Hz modulations", "By measuring the round-trip radar mile transit time"},
            "By measuring the time interval between the 'TO' scan pulse and the 'FRO' scan pulse",
            "The MLS receiver measures the time difference between the forward ('TO') and backward ('FRO') beam scans across the aircraft.",
            "TRSB relies on the time spacing between the TO and FRO narrow beam sweeps."
        },
        {
            "Why is pure integral (PI) action in the outer pitch loop avoided when driving the Flight Director pitch bar?",
            {"Delayed pilot reaction would cause integrator wind-up and excessive pitch bar deflection", "Integration produces unwanted 90 Hz / 150 Hz crosstalk in the ADI", "Integral control cannot function below 30 ft radio altitude"},
            "Delayed pilot reaction would cause integrator wind-up and excessive pitch bar deflection",
            "Because pilot response is unpredictable, an integrator in the outer loop would accumulate error during delays, causing pitch bar 'wind up'.",
            "Think about integrator saturation during pilot latency."
        },
        {
            "During a Takeoff Mode with Flight Director, what lateral guidance bar is active below 30 ft radio height?",
            {"Yaw bar (providing runway centerline guidance based on LOC deviation)", "Roll bar (providing bank angle guidance to intercept SID)", "Pitch bar in speed reference SRS mode"},
            "Yaw bar (providing runway centerline guidance based on LOC deviation)",
            "From brake release up to 30 ft radio height, the yaw bar guides rudder/nosewheel steering along runway centerline using the LOC signal. Above 30 ft, roll bar takes over.",
            "Yaw bar controls runway alignment on ground; roll bar takes over after liftoff."
        },
        {
            "What is the pulse spacing for DME interrogation and reply in Mode X operation?",
            {"12 microseconds for both interrogation (DL) and reply (UL)", "36 microseconds for interrogation and 30 microseconds for reply", "50 microseconds for interrogation and 56 microseconds for reply"},
            "12 microseconds for both interrogation (DL) and reply (UL)",
            "In DME Mode X, pulse spacing is 12 microseconds for both interrogation and reply. In Mode Y, spacing is 36 microseconds (DL) and 30 microseconds (UL).",
            "Mode X uses 12 us / 12 us; Mode Y uses 36 us / 30 us."
        },
        {
            "What is the fixed frequency difference between DME transmit (interrogation) and receive (reply) frequencies?",
            {"63 MHz", "150 kHz", "9960 Hz"},
            "63 MHz",
            "Every DME channel has a constant frequency offset of exactly +/- 63 MHz between the airborne interrogation and ground station reply carrier frequencies.",
            "Constant 63 MHz spacing in the 962-1213 MHz L-band."
        },
        {
            "What technique allows a DME interrogator to recognize its own replies among replies meant for other aircraft and random squitter?",
            {"Jittering (random variation of the interrogation pulse repetition interval)", "Phase Shift Keying of the 1350 Hz ident tone", "Beat Frequency Oscillation in the RF mixer"},
            "Jittering (random variation of the interrogation pulse repetition interval)",
            "Jittering varies the pulse repetition interval randomly; the airborne receiver correlates incoming pulses with its unique transmission time jitter pattern.",
            "Pseudo-random timing variation of pulse pairs."
        },
        {
            "Why does a GPS receiver require signals from at least four satellites to determine an exact 3D position?",
            {"Three satellites determine X, Y, Z coordinates and the fourth corrects the receiver's internal clock bias", "Four satellites are required for differential carrier phase decoding", "Two satellites provide latitude/longitude and two provide geoid undulation"},
            "Three satellites determine X, Y, Z coordinates and the fourth corrects the receiver's internal clock bias",
            "Because quartz receiver clocks lack atomic accuracy, a 4th pseudo-range measurement is needed to solve for the time offset (clock bias) along with X, Y, Z.",
            "4 unknowns: latitude, longitude, altitude, and receiver clock error."
        },
        {
            "What are the primary carrier frequencies of GPS L1 and L2 signals?",
            {"L1 = 1575.42 MHz, L2 = 1227.60 MHz", "L1 = 108.10 MHz, L2 = 329.15 MHz", "L1 = 5031 MHz, L2 = 5091 MHz"},
            "L1 = 1575.42 MHz, L2 = 1227.60 MHz",
            "GPS L1 carrier frequency is 1575.42 MHz (154 x 10.23 MHz) and L2 carrier is 1227.60 MHz (120 x 10.23 MHz).",
            "Derived as harmonics of the atomic standard 10.23 MHz clock."
        },
        {
            "How does a Ground Based Augmentation System (GBAS / LAAS) achieve Category I/II/III landing accuracy in GLS?",
            {"Ground reference GPS receivers compute differential corrections and broadcast them along with Final Approach Segment (FAS) data via VHF Data Broadcast (VDB)", "By replacing GPS satellites with geostationary microwave beacons transmitting at 5 GHz", "By slaving the Inertial Reference Unit to the localizer antenna array"},
            "Ground reference GPS receivers compute differential corrections and broadcast them along with Final Approach Segment (FAS) data via VHF Data Broadcast (VDB)",
            "GBAS calculates pseudo-range errors at airport reference stations and broadcasts corrections and FAS path data over VDB to aircraft MMRs, yielding sub-meter accuracy.",
            "Local differential correction over a VHF data broadcast link."
        },
        {
            "What is the primary operational advantage of an Inertial Reference System (IRS) compared to traditional radio navigation?",
            {"It is completely autonomous, independent of ground/satellite transmitters, unaffected by weather, and self-contained", "It provides zero positional drift over indefinitely long flight times", "It does not require initial present position alignment on the ground"},
            "It is completely autonomous, independent of ground/satellite transmitters, unaffected by weather, and self-contained",
            "IRS/INS measures internal accelerations and angular rates without requiring external radio signals, making it immune to jamming, weather, and ground station loss.",
            "Completely self-contained on board the aircraft."
        },
        {
            "What is Schuler tuning (Schuler alignment) in inertial navigation systems?",
            {"Applying a transport rate correction (V/R) so that the platform or computational frame remains locally level to the spherical Earth surface during flight", "Compensating for Coriolis force during high-speed turns", "Damping gyro nutation using magnetic torquer coils"},
            "Applying a transport rate correction (V/R) so that the platform or computational frame remains locally level to the spherical Earth surface during flight",
            "To keep the platform perpendicular to local gravity as the aircraft flies over the curved Earth, the system is torqued at the transport rate V/R (Schuler tuning).",
            "V/R correction maintaining the local vertical over the Earth's radius."
        },
        {
            "What fundamental difference distinguishes a Strapdown Inertial Reference System (IRS) from a Gimbal Platform INS?",
            {"Sensors (laser rate gyros and accelerometers) are rigidly bolted to the aircraft structure, and coordinate transformations are performed purely mathematically by computers", "A strapdown system uses floating mechanical gyroscopes isolated inside four motorized gimbal rings", "A strapdown system only measures vertical acceleration and relies on flux valves for attitude"},
            "Sensors (laser rate gyros and accelerometers) are rigidly bolted to the aircraft structure, and coordinate transformations are performed purely mathematically by computers",
            "In a strapdown system, gyros and accelerometers are fixed directly to the airframe (strapped down); high-speed microprocessors compute orientation matrices mathematically.",
            "No motorized gimbals; rate gyros bolted to structure + mathematical platform."
        },
        {
            "What is the relation between QDM and QDR in magnetic navigation?",
            {"QDR = QDM + 180 degrees", "QDR = QDM - 90 degrees", "QDR = QDM + 360 degrees"},
            "QDR = QDM + 180 degrees",
            "The reciprocal bearing from the ground station (QDR / radial) is always 180 degrees opposite to the bearing to the station (QDM).",
            "Bearing to the station vs bearing from the station."
        },
        {
            "What is Theta/Theta navigation?",
            {"Determining aircraft position by the intersection of two angular bearing lines from VOR or ADF stations", "Determining aircraft position by two distance circles from DME stations", "Determining aircraft position using Doppler velocity shifts"},
            "Determining aircraft position by the intersection of two angular bearing lines from VOR or ADF stations",
            "Theta navigation relies on angle/bearing measurements (Theta). Theta/Theta navigation determines position by intersecting two radials/bearings.",
            "Theta (θ) is the standard symbol for angle."
        },
        {
            "What three methods are available to tune radio navigation receivers on modern commercial aircraft?",
            {"Automatic tuning by FMS, manual tuning via MCDU NAV RADIO page, and manual backup tuning via RMP/RCP", "Automatic tuning by ADIRU, voice command via AMU, and tuning via PFD", "Mechanical goniometer tuning, BFO beat tuning, and ACARS datalink only"},
            "Automatic tuning by FMS, manual tuning via MCDU NAV RADIO page, and manual backup tuning via RMP/RCP",
            "Tuning is normally handled automatically by the FMS/FMGC based on the flight plan, manually on the MCDU, or via dedicated RMPs in NAV backup mode.",
            "FMS auto, MCDU manual, RMP backup."
        },
        {
            "What types of ground transmitters can be received by an aircraft ADF system?",
            {"Non-Directional Beacons (NDB), Locators, and commercial AM broadcast stations", "VOR stations, TACAN stations, and DME transponders", "Localizer transmitters and Glide Slope UHF antennas"},
            "Non-Directional Beacons (NDB), Locators, and commercial AM broadcast stations",
            "ADF operates in the 190 to 1750 kHz band and can receive NDBs, approach locators, and standard AM public broadcast stations.",
            "LF/MF transmitters including commercial radio broadcast."
        },
        {
            "What is the physical structure of a modern fixed ADF antenna?",
            {"Two fixed orthogonal loop coils wound on a ferrite cross and one capacitive sense antenna plate", "A motorized rotating loop coil inside a teardrop radome", "A dual-channel balanced slot radiator mounted on the vertical stabilizer"},
            "Two fixed orthogonal loop coils wound on a ferrite cross and one capacitive sense antenna plate",
            "Modern ADF antennas have no moving parts; they contain fixed sine/cosine loop coils on a cross ferrite core combined with a sense antenna plate.",
            "Fixed cross-ferrite core with sine and cosine windings."
        },
        {
            "In ADF systems, what happens to the pointer on the Navigation Display or RMI when the received signal is too weak or lost?",
            {"The pointer disappears from the ND or parks horizontally (3/9 o'clock) on mechanical RMIs", "The pointer continuously spins at 30 RPM", "The pointer locks permanently onto the last calculated magnetic heading"},
            "The pointer disappears from the ND or parks horizontally (3/9 o'clock) on mechanical RMIs",
            "When signal reception is lost, EFIS navigation displays erase the pointer, while mechanical RMI needles park in the 3 o'clock / 9 o'clock horizontal position.",
            "Parked horizontally across the dial."
        },
        {
            "What standard Morse code audio identification frequency is transmitted by VOR ground stations?",
            {"1020 Hz tone repeated every few seconds", "1350 Hz tone repeated every 30 seconds", "400 Hz continuous dashed tone"},
            "1020 Hz tone repeated every few seconds",
            "VOR stations transmit their 3-letter Morse identifier modulated at 1020 Hz (and optionally voice/ATIS between 300 and 3000 Hz).",
            "1020 Hz is the standard VOR and LOC ident audio frequency."
        },
        {
            "What is the typical transmitter power and range of a Terminal VOR (TVOR)?",
            {"Approx. 25 W power with a range of 25 to 50 NM", "Approx. 200 W power with a range exceeding 100 NM", "Approx. 1000 W power with a range of 320 NM"},
            "Approx. 25 W power with a range of 25 to 50 NM",
            "Terminal VORs are low-power stations (approx. 25 W) with coverage from 25 to 50 NM, whereas enroute VORs use around 200 W for >100 NM range.",
            "Low power for airport vicinity approach/holding."
        },
        {
            "What are the common antenna types used on transport aircraft for VOR and Localizer reception?",
            {"Balanced Loop antenna (on vertical stabilizer tip) or Balanced Slot antennas (flush mounted on stabilizer sides)", "Trailing wire antenna behind the fuselage", "Quarter-wave vertical stub antennas on the lower fuselage"},
            "Balanced Loop antenna (on vertical stabilizer tip) or Balanced Slot antennas (flush mounted on stabilizer sides)",
            "VOR requires horizontal polarization and omnidirectional reception; balanced loop (tip) and balanced slot (flush mounted with half-wave phasing cable) are used.",
            "Located high up on the vertical tail fin."
        },
        {
            "What is the standard ICAO overall system accuracy requirement for VOR ground and airborne systems?",
            {"+/- 5.0 degrees", "+/- 0.5 degrees", "+/- 12.4 NM"},
            "+/- 5.0 degrees",
            "ICAO requirements specify an overall VOR system accuracy within +/- 5.0 degrees (with ground station alignment maintained within +/- 3.5 degrees).",
            "5 degrees overall system tolerance."
        },
        {
            "What frequency band and channel spacing are assigned to the ILS Localizer?",
            {"108.10 MHz to 111.95 MHz with 50 kHz spacing on odd tenths of MHz", "108.00 MHz to 117.95 MHz with 50 kHz spacing on even tenths of MHz", "329.15 MHz to 335.00 MHz with 150 kHz channel spacing"},
            "108.10 MHz to 111.95 MHz with 50 kHz spacing on odd tenths of MHz",
            "Localizers use 40 channels between 108.10 and 111.95 MHz restricted to odd tenths (e.g. 108.10, 108.15, 108.30) to avoid conflict with TVORs.",
            "Odd-tenth VHF frequencies below 112 MHz."
        },
        {
            "Where is the ILS Glide Slope ground station antenna situated relative to the runway?",
            {"Beside the runway, offset 120-150 m from centerline and approximately 300 m beyond the landing threshold", "At the far departure stop end of the runway centerline", "Collocated with the Outer Marker 7.2 km before the threshold"},
            "Beside the runway, offset 120-150 m from centerline and approximately 300 m beyond the landing threshold",
            "The GS antenna mast is offset to the side of the runway near the touchdown touchdown touchdown zone, approx. 300 m beyond the runway threshold.",
            "Positioned next to the touchdown aiming point."
        },
        {
            "What is the standard DDM value for full scale deflection on an ILS Glide Slope indicator?",
            {"0.175 (17.5%)", "0.155 (15.5%)", "0.092 (9.2%)"},
            "0.175 (17.5%)",
            "Glide Slope full deflection corresponds to a DDM of 0.175 (17.5%), which represents approximately 0.5 to 1.0 degree vertical angular deviation.",
            "0.175 for GS vs 0.155 for LOC."
        },
        {
            "What tone modulation frequency, panel lamp color, and Morse keying identify an ILS Middle Marker (MM)?",
            {"1300 Hz tone, Amber lamp, alternating dot-dash Morse code", "400 Hz tone, Cyan/Blue lamp, continuous dashes", "3000 Hz tone, White lamp, continuous dots"},
            "1300 Hz tone, Amber lamp, alternating dot-dash Morse code",
            "The Middle Marker (approx. 1000 m / 3500 ft from threshold at ~200 ft altitude) modulates a 1300 Hz tone, illuminates the Amber light, and sounds dot-dashes.",
            "Middle Marker is Amber at 1300 Hz."
        },
        {
            "What is the standard transmission rate of random pulse pairs ('squitter') emitted by an un-interrogated DME ground station?",
            {"2700 pulse pairs per second", "650 pulse pairs per second", "1020 pulse pairs per second"},
            "2700 pulse pairs per second",
            "A DME ground beacon continuously radiates a constant 2700 pulse pairs/sec (squitter and replies) to keep aircraft receivers locked in AGC.",
            "Constant 2700 pp/s beacon output."
        },
        {
            "What is the time required for an RF radar pulse to travel one nautical mile and back (one 'Radar Mile')?",
            {"12.36 microseconds", "6.18 microseconds", "50.0 microseconds"},
            "12.36 microseconds",
            "At the speed of light, round-trip transit time for 1 NM is approx. 12.36 microseconds (plus the 50 us ground transponder delay in Mode X).",
            "Round-trip radio wave propagation per nautical mile."
        },
        {
            "How does the DME system prevent interference with on-board ATC transponders and TCAS systems operating in the L-band?",
            {"A mutual suppression coaxial bus provides blanking pulses during transmission by any of the three systems", "By operating DME exclusively in frequency modulation (FM) mode", "By physically separating antennas onto opposite wingtips"},
            "A mutual suppression coaxial bus provides blanking pulses during transmission by any of the three systems",
            "A mutual suppression line connects DME, ATC transponder, and TCAS. When one unit transmits, suppression pulses inhibit the receivers of the other systems.",
            "Mutual suppression / blanking bus."
        },
        {
            "What are the orbital characteristics of the GPS satellite constellation?",
            {"Six orbital planes at approximately 20,200 km (10,900 NM) altitude with 12-hour orbital periods", "Geostationary orbits at 36,000 km altitude directly above the equator", "Low Earth orbit (LEO) at 800 km altitude with 90-minute orbital periods"},
            "Six orbital planes at approximately 20,200 km (10,900 NM) altitude with 12-hour orbital periods",
            "GPS satellites orbit in 6 semi-synchronous planes inclined at 55 degrees at ~20,200 km altitude, each completing an orbit in 12 sidereal hours.",
            "Medium Earth Orbit (MEO) ~20,000 km, 12 h period, 6 planes."
        },
        {
            "What is the chipping rate and repeat period of the GPS C/A (Coarse/Acquisition) code?",
            {"1.023 Mbps chipping rate repeating every 1 millisecond", "10.23 Mbps chipping rate repeating every 7 days", "50 bps repeating every 12 hours"},
            "1.023 Mbps chipping rate repeating every 1 millisecond",
            "The civil C/A code is a 1023-bit Gold code clocked at 1.023 MHz, repeating exactly every 1 millisecond.",
            "1.023 MHz clock with 1 ms repetition period."
        },
        {
            "In an aircraft Flight Director Takeoff mode, how is rotation point on the runway determined?",
            {"By the pilot referring strictly to indicated airspeed reaching VR (the F/D cannot detect runway position)", "Automatically by the F/D when reaching 30 ft radio altitude", "By an acoustic cue triggered by the localizer receiver"},
            "By the pilot referring strictly to indicated airspeed reaching VR (the F/D cannot detect runway position)",
            "The manual notes specifically: The Flight Director cannot determine the point of rotation on the runway. The pilot rotates only upon reaching VR on the airspeed indicator.",
            "Pilot rotates at VR; F/D guidance commands attitude after rotation."
        },
        {
            "What rate of rotation does the Earth turn at, and what is its vertical drift component at latitude phi?",
            {"15.04 degrees/hour; Vertical drift component = 15.04 * sin(phi)", "360 degrees/hour; Vertical drift component = 360 * cos(phi)", "1.0 degree/minute; Vertical drift component = 1.0 * tan(phi)"},
            "15.04 degrees/hour; Vertical drift component = 15.04 * sin(phi)",
            "Earth turns at 15.04 deg/hr (360 deg / 24 hr). The vertical component causing gyro drift is 15.04 * sin(latitude), which is maximum at the poles and zero at the equator.",
            "15.04 deg/hr with sine of latitude for vertical rate."
        }
    };

}