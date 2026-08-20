#include <vector>
#include "question.h"

std::vector<Question> getATA23Questions() {
    return {
        // ------------------------------------------------------------------------
    // SECTION 1: Radio Wave Propagation & Fundamentals
    // ------------------------------------------------------------------------
    {
        "What are the three most important radio frequency bands used in aviation communication engineering?",
        {"HF, VHF, and UHF.", "VLF, LF, and MF.", "SHF, EHF, and Optical bands."},
        "HF, VHF, and UHF.",
        "According to ATA 23 fundamentals, the three most vital frequency bands used in aviation communications are HF (High Frequency: 2-30 MHz), VHF (Very High Frequency: 118-137 MHz), and UHF (Ultra High Frequency: 225-400 MHz).",
        "Think of the primary bands used for oceanic voice, line-of-sight ATC voice, and military/transponder communications."
    },
    {
        "How is the wave length (lambda) calculated from propagation speed (c) and frequency (f)?",
        {"lambda = c / f", "lambda = c * f", "lambda = f / c"},
        "lambda = c / f",
        "Wavelength lambda is defined as the propagation speed c divided by frequency f (lambda = c / f), or speed times the cycle period T (lambda = c * T). In vacuum/air, c is approximately 300,000 km/s.",
        "Recall the fundamental wave relationship where higher frequency yields shorter wavelength."
    },
    {
        "Why is ground wave radio transmission limited to relatively low frequencies?",
        {"Increasing the frequency rapidly increases attenuation due to earth-induced eddy currents.", "Higher frequencies reflect prematurely off the lower troposphere.", "High frequencies are completely absorbed by the stratosphere at ground level."},
        "Increasing the frequency rapidly increases attenuation due to earth-induced eddy currents.",
        "As the ground wave passes over and through the Earth's surface, it induces voltages in the soil, setting up eddy currents that absorb energy from the wave. Attenuation increases rapidly as frequency increases.",
        "Think of energy dissipation and ground absorption as RF frequency rises."
    },
    {
        "How does the conductivity of salt water compare to dry soil for surface ground wave propagation?",
        {"It is 5,000 times greater than dry soil.", "It is 500 times lower than dry soil.", "It has identical conductivity to dry soil."},
        "It is 5,000 times greater than dry soil.",
        "The electrical conductivity of salt water is approximately 5,000 times as great as dry soil, which makes coastal and oceanic paths vastly superior for ground wave conduction.",
        "Salt water has high dissolved ion concentration, making it exceptionally conductive."
    },
    {
        "Which ionospheric layer exists only during daylight hours and acts primarily as an RF energy absorber?",
        {"The D layer.", "The F2 layer.", "The E layer."},
        "The D layer.",
        "The D layer exists between 40 and 50 miles altitude and is present only during daylight hours; its primary effect is the absorption of sky wave energy, greatly reducing field intensity.",
        "It is the lowest layer of the ionosphere."
    },
    {
        "What happens to the ionospheric F layer during daylight hours under solar radiation?",
        {"It splits into two distinct layers: F1 and F2.", "It completely merges into the D layer.", "It collapses and disappears until nightfall."},
        "It splits into two distinct layers: F1 and F2.",
        "During the day, especially when the sun is high, the F layer separates into two sub-layers (F1 and F2), recombining into a single F layer shortly after sunset.",
        "Think of the two daytime sub-divisions: F1 and F2."
    },
    {
        "What is the definition of the 'skip zone' in sky wave propagation?",
        {"The silent area between where the ground wave ends and the first sky wave returns.", "The area immediately above the vertical transmitting antenna.", "The geographical region within line-of-sight where no fading occurs."},
        "The silent area between where the ground wave ends and the first sky wave returns.",
        "Between the point where the ground wave is completely attenuated and where the first sky wave is refracted back to Earth by the ionosphere, no signal can be heard; this area is the skip zone.",
        "It is the gap where neither ground waves nor returned sky waves reach the receiver."
    },
    {
        "How is the polarization of a radiated electromagnetic radio wave defined?",
        {"By the direction of the electrical field vector (E-field).", "By the direction of the magnetic field vector (H-field).", "By the orientation of the antenna mounting plate."},
        "By the direction of the electrical field vector (E-field).",
        "By convention and physical definition, polarization of an electromagnetic wave is defined strictly by the orientation and direction of its electrical field (E-field).",
        "Focus on the E-field vector relative to the Earth's surface."
    },
    {
        "In aviation radio systems, what polarizations are standardly used for Communication versus Navigation?",
        {"Communication is vertically polarized; Navigation is horizontally polarized.", "Communication is horizontally polarized; Navigation is vertically polarized.", "Both Communication and Navigation are circularly polarized."},
        "Communication is vertically polarized; Navigation is horizontally polarized.",
        "Aviation radio communication (VHF/HF) standardizes on vertical polarization, while aeronautical navigation systems (VOR, Localizer) standardly use horizontal polarization.",
        "Think of vertical aircraft comm blade antennas versus horizontal nav antennas."
    },
    {
        "What constitutes the physical construction of a Yagi-Uda antenna?",
        {"A driven dipole element with parasitic directors and reflectors.", "A single conductor wire forming a closed circular loop.", "A continuous spiral wire wrapped inside a dielectric cone."},
        "A driven dipole element with parasitic directors and reflectors.",
        "A Yagi antenna consists of an active driven dipole along with passive/parasitic elements: elements shorter than the dipole act as directors, and elements longer act as reflectors.",
        "Think of standard directional TV antennas with multiple parallel cross-bars."
    },
    {
        "What are the electrical characteristics and polarization of a vertically installed slot antenna?",
        {"It acts as a magnetic dipole and produces a horizontally polarized wave.", "It acts as an electric dipole and produces a vertically polarized wave.", "It acts as an isotropic radiator with circular polarization."},
        "It acts as a magnetic dipole and produces a horizontally polarized wave.",
        "A slot antenna is the magnetic equivalent of a dipole; because the electrical field across the vertical slot is horizontal, a vertical slot creates horizontal polarization.",
        "Recall Babinet's principle: the E-field in a slot is perpendicular to the slot length."
    },
    {
        "What is the standard characteristic line impedance (Z0) for coaxial RF cables in modern aircraft installations?",
        {"50 Ohms.", "75 Ohms.", "300 Ohms."},
        "50 Ohms.",
        "Modern aircraft RF installations standardise on a characteristic coaxial line impedance of 50 Ohms to ensure optimal power handling and minimum transmission loss.",
        "50 Ohms is the ubiquitous standard for aviation RF transceivers and cables."
    },
    {
        "What physical effect occurs on an RF transmission line when the load impedance does not match the line impedance (ZL != Z0)?",
        {"Standing waves are created due to wave reflection from the load.", "The transmission velocity exceeds the speed of light.", "The line impedance automatically drops to zero Ohms."},
        "Standing waves are created due to wave reflection from the load.",
        "When an RF line is mismatched, partial energy reflection occurs at the load. The forward and reflected waves superimpose to form stationary standing waves.",
        "Reflections travelling backward interfere with forward waves to form standing waves."
    },
    {
        "What mathematical formula determines the resonance frequency (f0) of an ideal LC circuit?",
        {"f0 = 1 / (2 * pi * sqrt(L * C))", "f0 = 2 * pi * sqrt(L * C)", "f0 = sqrt(L * C) / (2 * pi)"},
        "f0 = 1 / (2 * pi * sqrt(L * C))",
        "According to Thomson's oscillation formula, the resonant frequency of an undamped LC oscillator is f0 = 1 / (2 * pi * sqrt(L * C)).",
        "It's Thomson's classical resonance formula."
    },
    {
        "How is bandwidth (B) related to the quality factor (Q) of a tuned resonant circuit?",
        {"Bandwidth B = f0 / Q", "Bandwidth B = f0 * Q", "Bandwidth B = Q / f0"},
        "Bandwidth B = f0 / Q",
        "Bandwidth B is equal to the resonant frequency f0 divided by the Q-factor. A higher quality factor gives higher selectivity and a narrower bandwidth.",
        "High Q leads to sharp frequency selectivity and narrow bandwidth."
    },
    {
        "What physical phenomenon is utilized in quartz crystal resonators for frequency stabilization?",
        {"The Piezo-electric effect.", "The Hall effect.", "The Seebeck thermoelectric effect."},
        "The Piezo-electric effect.",
        "Quartz crystal resonators operate via the Piezo-electric effect: mechanical strain creates an electric charge, and applied alternating voltage produces stable mechanical oscillations.",
        "Piezo comes from the Greek word meaning to squeeze or press."
    },

    // ------------------------------------------------------------------------
    // SECTION 2: VHF Transceivers & Operations
    // ------------------------------------------------------------------------
    {
        "What is the operational frequency range of the aeronautical VHF Communication band?",
        {"118.000 MHz to 137.000 MHz.", "2.000 MHz to 30.000 MHz.", "225.000 MHz to 400.000 MHz."},
        "118.000 MHz to 137.000 MHz.",
        "Aeronautical VHF communication is allocated in the 117.975 / 118.000 MHz to 136.975 / 137.000 MHz frequency band.",
        "It is situated directly above the VOR/ILS localizer navigation band (108-117.95 MHz)."
    },
    {
        "Why was the 8.333 kHz channel spacing introduced in European airspace for flights above FL230?",
        {"To split each 25 kHz channel into three, creating over 2,000 available channels to solve congestion.", "To enable digital high-definition voice encryption.", "To reduce aircraft transmitter power requirements from 25W to 5W."},
        "To split each 25 kHz channel into three, creating over 2,000 available channels to solve congestion.",
        "Dividing the previous 25 kHz channels by 3 yielded 8.333 kHz channel spacing, creating over 2,000 communication channels to prevent frequency exhaustion in high-density airspace.",
        "25 kHz divided by 3 equals 8.333 kHz."
    },
    {
        "What is the international emergency distress frequency allocated in the aeronautical VHF band?",
        {"121.500 MHz.", "243.000 MHz.", "118.000 MHz."},
        "121.500 MHz.",
        "121.500 MHz is designated worldwide as the VHF aeronautical emergency guard frequency and is monitored by ATC and emergency beacons (ELT).",
        "It is the primary civil distress frequency in aviation."
    },
    {
        "What modulation mode is standardly used for civil aircraft VHF voice communication?",
        {"Amplitude Modulation (AM / A3E).", "Frequency Modulation (FM / F3E).", "Binary Phase Shift Keying (BPSK)."},
        "Amplitude Modulation (AM / A3E).",
        "Aeronautical VHF voice uses Amplitude Modulation (AM) because it avoids the FM 'capture effect', ensuring weaker transmissions are not completely blocked by stronger signals.",
        "Think of AM versus FM modulation."
    },
    {
        "What type of antenna is standardly installed for aircraft VHF voice communication?",
        {"A wideband quarter-wave (lambda/4) sword/blade antenna with a base impedance of 50 Ohms.", "A directional parabolic dish mounted under the radome.", "A long trailing wire reel antenna deployed from the empennage."},
        "A wideband quarter-wave (lambda/4) sword/blade antenna with a base impedance of 50 Ohms.",
        "Aircraft VHF communications utilize wideband vertically polarized lambda/4 blade/sword antennas with 50-Ohm base impedance and a low aspect ratio.",
        "Look at the aerodynamic vertical blade antennas on the fuselage."
    },
    {
        "What is the maximum allowable Voltage Standing Wave Ratio (VSWR) on an aircraft VHF communication antenna installation?",
        {"VSWR must be 2.0 or lower (acceptable up to 5:1 maximum limit).", "VSWR must always be 0.0.", "VSWR can be anything up to 50:1 without causing damage."},
        "VSWR must be 2.0 or lower (acceptable up to 5:1 maximum limit).",
        "During BITE self-test, a VSWR greater than 2.0 indicates an RF cable or antenna fault, while the maximum allowable system operating limit is 5:1.",
        "A VSWR near 1.0 is ideal; values above 2.0 indicate line/antenna mismatch."
    },
    {
        "Why is an emergency power supply connected specifically to VHF transceiver #1 on aircraft certified for IFR?",
        {"To guarantee essential air traffic control communication in the event of main generator failure.", "Because VHF 1 consumes less electrical current than VHF 2.", "To feed emergency DC voltage into the engine starter relays."},
        "To guarantee essential air traffic control communication in the event of main generator failure.",
        "VHF system #1 is connected to the emergency / battery bus to ensure uninterrupted ATC voice communication during total AC generator or main bus loss.",
        "Safety regulations require vital comms to remain alive on battery power."
    },

    // ------------------------------------------------------------------------
    // SECTION 3: HF Transceivers, Couplers & Antennas
    // ------------------------------------------------------------------------
    {
        "What is the frequency range and primary operating modes of aircraft HF communication systems?",
        {"2.0 MHz to 30.0 MHz, utilizing SSB (A3J) and AM (A3H).", "118.0 MHz to 137.0 MHz, utilizing Narrowband FM.", "108.0 MHz to 112.0 MHz, utilizing Pulse Modulation."},
        "2.0 MHz to 30.0 MHz, utilizing SSB (A3J) and AM (A3H).",
        "Aircraft HF systems operate in the 2 to 30 MHz range, utilizing Single Sideband (USB / A3J) for efficient long-distance voice/data, with AM mode (A3H) available.",
        "HF covers 2 to 30 MHz for long-range oceanic communication."
    },
    {
        "Why is an automatic antenna coupler indispensable in an aircraft HF communication system?",
        {"To match the varying impedance of the HF antenna across the 2-30 MHz band to 50 Ohms.", "To convert analog voice signals into digital ARINC 429 words.", "To automatically switch between cockpit speakers and headsets."},
        "To match the varying impedance of the HF antenna across the 2-30 MHz band to 50 Ohms.",
        "Because the HF band covers a 1:15 frequency ratio, the fixed antenna's electrical length and impedance vary widely; the coupler tunes and matches it to 50 Ohms to minimize VSWR.",
        "A fixed antenna cannot remain resonant across the entire 2-30 MHz spectrum without tuning."
    },
    {
        "What audible feedback tone indicates that the HF antenna coupler is currently executing a tuning sequence?",
        {"A steady 1000 Hz tone in the flight crew headphones.", "A 400 Hz pulsed warning buzzer.", "A continuous high/low passenger cabin chime."},
        "A steady 1000 Hz tone in the flight crew headphones.",
        "During HF tuning, transmitter power is reduced and a 1 kHz (1000 Hz) tone is fed into the flight crew audio until the coupler finishes impedance matching.",
        "It is a distinct 1000 Hz tone."
    },
    {
        "What antenna configurations are typically utilized for HF communications on large transport aircraft?",
        {"Leading-edge vertical fin slot antennas or probe/shunt antennas on the tail or wingtips.", "Parabolic reflectors mounted inside the pressurized cabin.", "Ferrite rod loop antennas installed under the aircraft belly."},
        "Leading-edge vertical fin slot antennas or probe/shunt antennas on the tail or wingtips.",
        "HF systems use slot antennas (wire mesh in the vertical fin leading edge grounded by bonding jumpers) or probe/shunt antennas at the fin tip or wingtips.",
        "Think of the vertical tail fin leading edge antenna on modern jetliners."
    },

    // ------------------------------------------------------------------------
    // SECTION 4: Audio Integrating, Management & Interphone
    // ------------------------------------------------------------------------
    {
        "What is the function of the Audio Management Unit (AMU) in a modern airliner?",
        {"It acts as the central interface and router between acoustic equipment, ACPs, and all comm/nav systems.", "It generates radio frequencies for the VHF transceivers.", "It records cockpit area microphone sounds onto solid state memory."},
        "It acts as the central interface and router between acoustic equipment, ACPs, and all comm/nav systems.",
        "The AMU is the heart of the audio integrating system; it connects cockpit headsets, handmikes, masks, and speakers with all transceivers, receivers, interphones, CVR, and SELCAL.",
        "It is the central switching computer for all cockpit audio."
    },
    {
        "What happens when the ON VOICE push button is activated on an aircraft Audio Control Panel (ACP)?",
        {"It attenuates Morse code station identifiers from VOR/ADF/DME to allow clear voice reception.", "It enables automatic speech-to-text conversion for ACARS.", "It opens the intercom channel between the cockpit and cabin crew permanently."},
        "It attenuates Morse code station identifiers from VOR/ADF/DME to allow clear voice reception.",
        "Pressing the ON VOICE button activates an audio notch/bandpass filter that suppresses the 1020 Hz Morse identification tone, allowing pilots to clearly hear ATIS or voice broadcasts.",
        "Filters out the 1020 Hz station ID tone."
    },
    {
        "How is acoustic feedback prevented between cockpit loudspeakers and active flight crew microphones?",
        {"A muting circuit cuts off speaker audio whenever the PTT (Push-To-Talk) is keyed.", "The speaker volume is locked at zero permanently.", "Microphone sensitivity is reduced by 50% during flight."},
        "A muting circuit cuts off speaker audio whenever the PTT (Push-To-Talk) is keyed.",
        "To avoid acoustic howling/feedback between loudspeakers and microphones, a muting circuit is activated by the ground discrete of the PTT function.",
        "PTT activation grounds and mutes the cockpit loudspeaker."
    },
    {
        "Why can service interphone jacks be switched off or isolated during flight?",
        {"Because external jacks in gear bays and engine nacelles are exposed to moisture and dirt that could short the system.", "To save electrical battery power during cruise.", "To prevent passengers from plugging in personal headphones."},
        "Because external jacks in gear bays and engine nacelles are exposed to moisture and dirt that could short the system.",
        "Service jacks located in dirty or damp areas (wheel wells, fueling stations) are isolated in flight (via landing gear compressed logic or override switch) to prevent water/dirt shorts from compromising cabin interphone.",
        "External ground jacks are isolated to protect the internal interphone bus from contamination."
    },

    // ------------------------------------------------------------------------
    // SECTION 5: Passenger Address & SELCAL
    // ------------------------------------------------------------------------
    {
        "What priority order does the aircraft Passenger Address (PA) amplifier enforce for audio sources?",
        {"1: Cockpit crew, 2: Purser, 3: Cabin crew, 4: Pre-recorded announcements, 5: Boarding music.", "1: Boarding music, 2: Cabin crew, 3: Purser, 4: Cockpit crew, 5: Pre-recorded announcements.", "1: Pre-recorded announcements, 2: Purser, 3: Cockpit crew, 4: Cabin crew, 5: Boarding music."},
        "1: Cockpit crew, 2: Purser, 3: Cabin crew, 4: Pre-recorded announcements, 5: Boarding music.",
        "The PA amplifier priority circuit assigns top priority to the flight deck (cockpit), followed by the purser, other cabin attendants, automated pre-recorded announcements, and finally boarding music.",
        "The Captain and First Officer always have immediate override authority."
    },
    {
        "How is the PA amplifier gain automatically boosted during a cabin decompression event?",
        {"An additional +3 dB gain is applied when passenger oxygen masks deploy at 14,000 ft cabin altitude.", "A +20 dB gain is triggered when the emergency landing gear handle is pulled.", "All cabin loudspeakers are switched off except in the galleys."},
        "An additional +3 dB gain is applied when passenger oxygen masks deploy at 14,000 ft cabin altitude.",
        "The PA amplifier adds +6 dB when at least one engine runs (oil pressure switch), and an additional +3 dB when passenger masks deploy at 14,000 ft cabin altitude pressure switch.",
        "Cabin decompression triggers passenger mask deployment at 14,000 ft."
    },
    {
        "How is a SELCAL (Selective Calling) transmission structured when contacting an aircraft?",
        {"Four audio frequencies transmitted as two consecutive tone pairs (e.g., AM-DE).", "A continuous 1020 Hz Morse code identifier.", "A 32-bit digital serial packet transmitted over 121.5 MHz."},
        "Four audio frequencies transmitted as two consecutive tone pairs (e.g., AM-DE).",
        "A SELCAL signal consists of 4 tones: the first two are sent for 1.0 second, followed by a 0.2 second pause, then the second two tones for 1.0 second.",
        "Think of two-tone acoustic pairs like AB-CD."
    },
    {
        "How is the SELCAL code programmed on modern aircraft installations?",
        {"Via pin programming using shorting receptacles in the avionics rack.", "By entering a 4-digit PIN on the Captain's primary flight display.", "By burning a new firmware chip for every flight."},
        "Via pin programming using shorting receptacles in the avionics rack.",
        "On modern airliners, the aircraft's 4-letter SELCAL code is defined by aircraft wiring pin programming via shorting receptacles or a code selection panel in the avionics bay.",
        "Hardware pin programming in the electrical & electronics rack."
    },

    // ------------------------------------------------------------------------
    // SECTION 6: Cockpit Voice Recorder & ACARS
    // ------------------------------------------------------------------------
    {
        "What is the standard recording duration of modern Solid State Cockpit Voice Recorders (SSCVR)?",
        {"120 minutes (2 hours).", "30 minutes.", "15 minutes."},
        "120 minutes (2 hours).",
        "Modern solid-state CVRs record a minimum of 120 minutes of 4-channel audio into crash-protected solid-state memory, replacing older 30-minute magnetic tape units.",
        "Modern EASA/FAA regulations mandate a 2-hour recording window."
    },
    {
        "Under what conditions is the Cockpit Voice Recorder (CVR) bulk erase function permitted to operate?",
        {"Aircraft on ground with the parking brake set.", "Aircraft airborne with autopilot engaged in cruise.", "Any time the ERASE button is pressed for 0.5 seconds in flight."},
        "Aircraft on ground with the parking brake set.",
        "To protect cockpit privacy after flight and prevent accidental data loss in flight, bulk erase functions only on ground with the parking brake applied.",
        "Requires ground sensing and parking brake engagement."
    },
    {
        "How long does the Underwater Locator Beacon (ULB) on a CVR transmit upon immersion in water?",
        {"90 days.", "30 days.", "12 hours."},
        "90 days.",
        "Modern CVR underwater locator beacons (ULB) are battery-powered and operate for at least 90 days following water immersion.",
        "Recent safety regulations increased ULB beacon life to 90 days."
    },
    {
        "What events do the ACARS 'OOOI' automatic movement reports represent?",
        {"Out of gate, Off ground, On ground, In gate.", "Order, Origin, Operation, Inspection.", "Overhead, Outbound, Optimal, Inbound."},
        "Out of gate, Off ground, On ground, In gate.",
        "OOOI reports represent Out (doors closed & brake released), Off (takeoff squat switch), On (touchdown squat switch), and In (door open at gate).",
        "Tracks aircraft gate-to-gate operational status."
    },
    {
        "Which VHF transceiver is primarily dedicated to ACARS / ATSU data communications on modern airliners?",
        {"VHF 3 (VHF Center / VHF Data).", "VHF 1 (Captain's primary transceiver).", "VHF 2 (First Officer's primary transceiver)."},
        "VHF 3 (VHF Center / VHF Data).",
        "VHF 3 is standardly configured for ACARS / ATSU data link communication, while VHF 1 and VHF 2 are retained for primary ATC voice communication.",
        "VHF 1 is Left, VHF 2 is Right, VHF 3 is Center/Data."
    },
    {
        "What happens when the ACARS Management Unit encounters a 'NO LAT/LON' condition?",
        {"It displays 'USE MAN FREQ' in amber and prompts manual data frequency selection.", "It automatically executes an emergency engine shutdown sequence.", "It transfers primary flight controls to the standby horizon."},
        "It displays 'USE MAN FREQ' in amber and prompts manual data frequency selection.",
        "When position data from ADIRU 3 is lost, the MU cannot auto-tune regional ground stations, prompting the amber MCDU message 'NO LAT/LON, USE MAN FREQ'.",
        "Without coordinates, ACARS requires manual VHF frequency tuning."
    },
    {
        "What is the function of the RMP NAV backup mode on modern Airbus aircraft?",
        {"It allows direct backup tuning of VOR, DME, ILS, and ADF if both FMGCs fail.", "It transmits emergency locator signals directly to search-and-rescue satellites.", "It switches the primary navigation display from glass cockpit to standby instruments."},
        "It allows direct backup tuning of VOR, DME, ILS, and ADF if both FMGCs fail.",
        "Opening the guarded NAV key on the RMP decouples navigation receivers from failed FMGCs, enabling the crew to manually tune navigation frequencies using RMP 1 and RMP 2.",
        "Guarded NAV switch allows manual radio nav tuning when flight management computers fail."
    },
    {
        "What is the purpose of the Beat Frequency Oscillator (BFO) in an aircraft radio receiver?",
        {"To make unmodulated (A0) or keyed CW (A1) Morse signals audible as a 1020 Hz tone.", "To modulate digital voice onto high-frequency carriers.", "To suppress lightning static pulses in the audio amplifier."},
        "To make unmodulated (A0) or keyed CW (A1) Morse signals audible as a 1020 Hz tone.",
        "A BFO injects an oscillation 1020 Hz offset from the IF, heterodyning with unmodulated or keyed CW carriers to produce an audible 1020 Hz tone for station identification.",
        "It converts unmodulated CW carriers into audible audio tones."
    },
    {
        "What is the function of the Automatic Gain Control (AGC) circuit in an AM receiver?",
        {"To maintain a constant audio volume level regardless of incoming RF signal strength fluctuations.", "To automatically select the strongest radio station among adjacent frequencies.", "To cut off the microphone circuit during high cockpit noise levels."},
        "To maintain a constant audio volume level regardless of incoming RF signal strength fluctuations.",
        "Because AM signal strength directly affects demodulated volume, AGC develops a DC control voltage from the IF to adjust RF/IF amplifier gain, keeping output audio stable.",
        "AGC prevents loud blasting when flying close to a transmitter and boosts weak distant signals."
    },
    {
        "What happens to the VHF transceiver tuning if the ARINC 429 control bus from the RMP fails (CONTROL INPUT FAIL)?",
        {"The transceiver remains tuned to the last valid active frequency.", "The transceiver immediately shuts down its power supply.", "The transceiver switches automatically to 121.500 MHz."},
        "The transceiver remains tuned to the last valid active frequency.",
        "Upon detection of a faulty control word, the BITE illuminates the red CONTROL INPUT FAIL LED and the transceiver maintains operation on its last valid active frequency.",
        "Fail-safe architecture maintains the last tuned frequency."
    },
    {
        "How is the cockpit area microphone (CAM) audio processed in a Fairchild A200S SSCVR?",
        {"It is recorded as high-quality for 30 minutes and standard-quality for 120 minutes.", "It is recorded only when the pilot activates the push-to-talk switch.", "It is compressed into an encrypted 15-minute emergency partition."},
        "It is recorded as high-quality for 30 minutes and standard-quality for 120 minutes.",
        "The A200S SSCVR records four 30-minute high-quality channels (including CAM on Channel 4) and two 120-minute standard-quality channels (one dedicated to CAM).",
        "SSCVRs record CAM both in high-quality (30 min) and standard-quality (120 min)."
    },
    {
        "What is the primary function of a Meissner oscillator circuit?",
        {"It uses inductive feedback via a transformer to maintain high-frequency oscillations.", "It divides capacitance to set oscillator frequency.", "It uses a variable resistance potentiometer to shift phase by 180 degrees."},
        "It uses inductive feedback via a transformer to maintain high-frequency oscillations.",
        "The identifying feature of the Meissner oscillator is transformer coupling in the feedback loop, where the primary winding and capacitor form the tuned resonant circuit.",
        "Look for transformer feedback coupling."
    },
    {
        "How does a Colpitts oscillator achieve feedback and determine resonance?",
        {"By dividing the resonant circuit capacitance with a capacitive voltage divider.", "By center-tapping the resonant circuit inductor.", "By using an external audio transformer."},
        "By dividing the resonant circuit capacitance with a capacitive voltage divider.",
        "In a Colpitts oscillator, amplitude and phase feedback conditions are determined by a capacitive voltage divider across the resonant circuit.",
        "Colpitts divides Capacitance (C)."
    },
    {
        "What is the main operational advantage of Single Sideband (SSB) over conventional Amplitude Modulation (AM)?",
        {"SSB concentrates transmission power in a single sideband, cutting required bandwidth by 50%.", "SSB allows simultaneous video and audio broadcasting on the same channel.", "SSB completely eliminates the need for an antenna coupler."},
        "SSB concentrates transmission power in a single sideband, cutting required bandwidth by 50%.",
        "Suppressing the carrier and one sideband halves the required bandwidth and eliminates carrier fading distortion, enabling a 100W SSB transmitter to match a 400W AM transmitter.",
        "SSB saves spectrum and delivers 4x effective range efficiency."
    },
    {
        "What does the acronym SELCAL stand for in aircraft communication systems?",
        {"Selective Calling.", "Sequential Low-frequency Calling.", "Standard Electronic Logic Calibration."},
        "Selective Calling.",
        "SELCAL stands for Selective Calling, a system designed to relieve flight crew from continuously monitoring long-range oceanic HF/VHF channels by signaling incoming calls with chimes and lights.",
        "Selectively calls a specific aircraft."
    }
};


}
