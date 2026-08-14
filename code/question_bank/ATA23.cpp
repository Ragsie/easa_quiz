#include <vector>
#include "question.h"

std::vector<Question> getATA23Questions() {
    return {
        // ata 23
        {
            "What are the three most important frequency bands used in aviation communication engineering?",
            {"HF, VHF, and UHF.", "VLF, LF, and MF.", "SHF, EHF, and Optical."},
            "HF, VHF, and UHF.",
            "According to ATA 23 fundamentals, the three most vital frequency bands used in communication engineering are HF (High Frequency), VHF (Very High Frequency), and UHF (Ultra High Frequency).",
            "Think of the primary bands used for long-range, line-of-sight, and military/transponder comms."
        },
        {
            "How is the wave length (lambda) calculated from propagation speed (c) and frequency (f)?",
            {"lambda = c / f", "lambda = c * f", "lambda = f / c"},
            "lambda = c / f",
            "Wave length lambda is calculated as the propagation speed c divided by frequency f (lambda = c / f), or speed times the cycle time T (c * T).",
            "Recall the standard wave equation relating velocity, wavelength, and frequency."
        },
        {
            "Why is ground wave transmission limited to relatively low frequencies?",
            {"Increasing the frequency rapidly increases attenuation due to induced earth currents.", "Higher frequencies reflect too early from the troposphere.", "Ionospheric absorption completely blocks high frequencies at ground level."},
            "Increasing the frequency rapidly increases attenuation due to induced earth currents.",
            "As the ground wave passes over and through the earth, it induces voltages setting up eddy currents, absorbing energy. Higher frequencies attenuate much more rapidly.",
            "Consider how energy is dissipated into the soil as eddy currents."
        },
        {
            "How does the conductivity of salt water compare to that of dry soil for ground wave propagation?",
            {"It is 5,000 times as great as dry soil.", "It is 500 times lower than dry soil.", "It is identical to wet clay."},
            "It is 5,000 times as great as dry soil.",
            "The conductivity of salt water is approximately 5,000 times greater than that of dry soil, making coastal/oceanic ground wave propagation extremely efficient.",
            "Salt water contains dissolved ions, vastly increasing its conductivity."
        },
        {
            "Which ionospheric layer exists only during daylight hours and absorbs sky wave energy?",
            {"The D layer.", "The F2 layer.", "The E layer."},
            "The D layer.",
            "The D layer is situated at 40 to 50 miles altitude and is present only in daylight; its primary effect is the attenuation/absorption of radio waves.",
            "It is the lowest layer of the ionosphere."
        },
        {
            "What happens to the F layer of the ionosphere during daytime?",
            {"It splits into two distinct layers: F1 and F2.", "It merges completely with the D layer.", "It dissipates entirely due to intense solar radiation."},
            "It splits into two distinct layers: F1 and F2.",
            "During the day, especially under direct sunlight, the F layer often separates into F1 and F2 layers, and recombines into a single F layer shortly after sunset.",
            "Think of the sub-layers named F1 and F2."
        },
        {
            "What is the definition of the 'skip zone' in radio wave propagation?",
            {"The area between the point where the ground wave ends and the first sky wave returns.", "The silent zone directly above the transmitting antenna.", "The oceanic zone where salt water reflects 100% of signals."},
            "The area between the point where the ground wave ends and the first sky wave returns.",
            "Between the point where the ground wave is completely dissipated and where the first sky wave is refracted back to Earth, no signal is received; this is the skip zone.",
            "It's the gap where neither ground wave nor returned sky wave can reach."
        },
        {
            "How is polarization of an electromagnetic radio wave defined?",
            {"By the direction of the electrical field (E-field).", "By the direction of the magnetic field (H-field).", "By the direction of the Poynting vector."},
            "By the direction of the electrical field (E-field).",
            "By convention and physical definition, polarization is determined strictly by the orientation of the electrical field vector.",
            "Focus on the E-field vector orientation relative to the Earth's surface."
        },
        {
            "In aviation, what standard polarization is used for Communication systems versus Navigation systems?",
            {"Communication is vertically polarized; Navigation is horizontally polarized.", "Communication is horizontally polarized; Navigation is vertically polarized.", "Both communication and navigation are circularly polarized."},
            "Communication is vertically polarized; Navigation is horizontally polarized.",
            "In aviation standards, VHF/HF voice communications use vertical polarization, whereas navigation systems (like VOR, LOC, ILS) use horizontal polarization.",
            "Think of vertical aircraft comm antennas vs horizontal nav antennas."
        },
        {
            "What is the typical mechanical structure of a Yagi antenna?",
            {"A dipole driven element with parasitic directors and reflectors.", "A continuous spiral wire forming a helical radiator.", "A solid parabolic dish with a center horn feed."},
            "A dipole driven element with parasitic directors and reflectors.",
            "A Yagi antenna consists of an active dipole accompanied by passive/parasitic elements (elements shorter than the dipole act as directors; longer act as reflectors).",
            "Think of rooftop TV antennas with multiple parallel rods."
        },
        {
            "What is the function of a slot antenna, and how is it polarized when mounted vertically?",
            {"It acts as a magnetic dipole and produces a horizontally polarized wave.", "It acts as an electric dipole and produces a vertically polarized wave.", "It acts as a dielectric lens and produces circular polarization."},
            "It acts as a magnetic dipole and produces a horizontally polarized wave.",
            "The slot antenna is the magnetic equivalent of a dipole; because the E-field is oriented across the narrow horizontal slot, a vertical slot creates horizontal polarization.",
            "Recall Babinet's principle: slot E-field runs perpendicular to the slot length."
        },
        {
            "What is the standard characteristic line impedance (Z0) of coaxial cables in modern aircraft installations?",
            {"50 Ohms.", "75 Ohms.", "300 Ohms."},
            "50 Ohms.",
            "Modern RF installations and coaxial power lines on aircraft standardise on a characteristic impedance of 50 Ohms.",
            "It is the standard RF impedance for transceivers and interconnecting coax."
        },
        {
            "What occurs when an RF line is terminated with a mismatched impedance (ZL != Z0)?",
            {"A standing wave is generated due to wave reflection.", "The signal propagates with supersonic speed.", "The characteristic line impedance drops to 0 Ohms automatically."},
            "A standing wave is generated due to wave reflection.",
            "Impedance mismatch creates reflections from the load back to the source, which superimpose with incoming waves to create standing waves.",
            "Think of reflected waves superimposing on forward waves."
        },
        {
            "What formula defines the undamped resonance frequency (f0) of an LC resonant circuit?",
            {"f0 = 1 / (2 * pi * sqrt(L * C))", "f0 = 2 * pi * sqrt(L * C)", "f0 = sqrt(L * C) / (2 * pi)"},
            "f0 = 1 / (2 * pi * sqrt(L * C))",
            "According to Thomson's oscillation formula, f0 = 1 / (2 * pi * sqrt(L * C)).",
            "It's Thomson's formula for LC resonance."
        },
        {
            "How is bandwidth (B) related to the quality factor (Q) of a resonant circuit?",
            {"B = f0 / Q", "B = f0 * Q", "B = Q / f0"},
            "B = f0 / Q",
            "Bandwidth B is defined as the center frequency f0 divided by the quality factor Q (B = f0 / Q). Higher Q means narrower bandwidth and higher selectivity.",
            "High Q leads to sharp resonance peaks and small bandwidth."
        },
        {
            "In a crystal oscillator, what physical principle allows mechanical vibrations to convert to electrical signals?",
            {"The Piezo-electric effect.", "The Hall effect.", "The Doppler effect."},
            "The Piezo-electric effect.",
            "Mechanical compression or expansion of crystal surfaces induces electrical charges and voltages due to the Piezo-electric effect.",
            "Piezo comes from the Greek word for press or squeeze."
        },
        {
            "What is the frequency range of the aeronautical VHF Communication band?",
            {"118.000 MHz to 137.000 MHz.", "2.000 MHz to 30.000 MHz.", "225.000 MHz to 400.000 MHz."},
            "118.000 MHz to 137.000 MHz.",
            "Civil aviation VHF communication spans from 117.975 / 118.000 MHz up to 136.975 / 137.000 MHz.",
            "It sits immediately above the VHF VOR/ILS navigation band (108-117.95 MHz)."
        },
        {
            "What channel spacing was introduced in European high-altitude airspace (> FL230) to increase VHF capacity?",
            {"8.333 kHz.", "25 kHz.", "50 kHz."},
            "8.333 kHz.",
            "To relieve congestion above FL230, the traditional 25 kHz channel spacing was split by 3, resulting in 8.333 kHz spacing and over 2,000 channels.",
            "Divide 25 kHz by 3."
        },
        {
            "What international emergency frequency is assigned to civil VHF aviation?",
            {"121.500 MHz.", "243.000 MHz.", "118.000 MHz."},
            "121.500 MHz.",
            "121.5 MHz is the international VHF distress and emergency guard frequency, monitored by ATC and emergency locator transmitters (ELT).",
            "The classic aeronautical VHF guard channel."
        },
        {
            "What type of modulation is standard for civil aeronautical VHF voice communication?",
            {"Amplitude Modulation (AM / A3E).", "Frequency Modulation (FM / F3E).", "Phase Shift Keying (BPSK)."},
            "Amplitude Modulation (AM / A3E).",
            "Aviation VHF voice uses Amplitude Modulation (AM) to allow simultaneous readability (no FM capture effect) and simple detection.",
            "Think of AM radio vs FM radio."
        },
        {
            "What is the frequency range and typical modulation of aircraft HF communication systems?",
            {"2 MHz to 30 MHz, using SSB (A3J) or AM (A3H).", "118 MHz to 137 MHz, using Narrowband FM.", "108 MHz to 112 MHz, using Pulse Modulation."},
            "2 MHz to 30 MHz, using SSB (A3J) or AM (A3H).",
            "Aircraft HF systems operate between 2 and 30 MHz, primarily using Single Sideband (USB / A3J) with optional AM carrier (A3H).",
            "HF covers 2-30 MHz for oceanic and polar long-range flights."
        },
        {
            "Why is an automatic antenna coupler required in aircraft HF systems?",
            {"Because the HF band covers a wide 1:15 frequency range requiring tuning for impedance matching.", "To convert analog voice signals into digital ARINC 429 words.", "To switch between cockpit speakers and headsets automatically."},
            "Because the HF band covers a wide 1:15 frequency range requiring tuning for impedance matching.",
            "Because the frequency range spans 2 to 30 MHz (a 1:15 ratio), the fixed antenna length cannot remain resonant; the coupler matches the antenna impedance to 50 Ohms to minimize VSWR.",
            "A wide operating range means the antenna's electrical length varies dramatically."
        },
        {
            "What audio tone indicates that the HF antenna coupler is actively performing a tuning cycle?",
            {"A 1000 Hz steady tone in the flight crew headphones.", "A 400 Hz interrupted pulsing buzzer.", "A continuous high/low chime."},
            "A 1000 Hz steady tone in the flight crew headphones.",
            "During HF tuning, transmitter output power is reduced and a 1 kHz (1000 Hz) tone is fed to the audio output until tuning and matching complete.",
            "It is a distinct 1 kHz sidetone."
        },
        {
            "What is the structure of a SELCAL (Selective Calling) code transmitted to an aircraft?",
            {"Four audio tones transmitted as two consecutive tone pairs (e.g. AM-DE).", "A continuous 1020 Hz Morse code identifier.", "A 32-bit digital binary sequence over 121.5 MHz."},
            "Four audio tones transmitted as two consecutive tone pairs (e.g. AM-DE).",
            "A SELCAL code consists of 4 letters assigned to specific audio frequencies. Two tones are transmitted for 1.0 s, followed by a 0.2 s pause, then the next two tones for 1.0 s.",
            "Recall the two-pulse tone pair format (Red/Red tone combinations)."
        },
        {
            "In the aircraft Passenger Address (PA) system, which input has the highest priority?",
            {"Flight deck / cockpit announcements.", "Purser announcements.", "Automatic pre-recorded emergency announcements."},
            "Flight deck / cockpit announcements.",
            "The PA amplifier priority logic gives priority #1 to the cockpit flight crew, followed by the purser, cabin crew, pre-recorded announcements, and finally boarding music.",
            "The Captain and First Officer always override all cabin audio."
        },
        {
            "How is the PA amplifier gain automatically increased during cabin decompression?",
            {"By an additional +3 dB gain triggered by the 14,000 ft cabin altitude pressure switch.", "By +20 dB triggered by the engine fire handle.", "By disabling all cabin speakers except lavatories."},
            "By an additional +3 dB gain triggered by the 14,000 ft cabin altitude pressure switch.",
            "PA gain increases by +6 dB when an engine runs (oil pressure switch), and adds another +3 dB when passenger oxygen masks deploy at 14,000 ft cabin altitude.",
            "Decompression causes mask deployment at 14,000 ft cabin altitude."
        },
        {
            "How many minutes of audio does a modern Solid State Cockpit Voice Recorder (SSCVR) record?",
            {"120 minutes (2 hours).", "30 minutes.", "15 minutes."},
            "120 minutes (2 hours).",
            "Modern solid state CVRs (SSCVR) record at least 120 minutes of 4-channel audio into crash-protected solid-state flash memory, replacing older 30-min magnetic tapes.",
            "Modern EASA/FAA crash standards require a minimum 2-hour window."
        },
        {
            "Under what conditions can the Cockpit Voice Recorder (CVR) bulk erase function be activated?",
            {"Aircraft on ground with the parking brake set.", "Aircraft airborne with autopilot engaged.", "Any time the ERASE button is pressed for 0.5 seconds in flight."},
            "Aircraft on ground with the parking brake set.",
            "To prevent accidental in-flight loss of evidence and protect crew privacy after flight, bulk erase only operates when on the ground with parking brake applied.",
            "Ground sensing + parking brake interlock."
        },
        {
            "What does the ACARS 'OOOI' acronym stand for in automatic flight phase reporting?",
            {"Out of gate, Off ground, On ground, In gate.", "Order, Origin, Operation, Inspection.", "Overhead, Outbound, Optimal, Inbound."},
            "Out of gate, Off ground, On ground, In gate.",
            "OOOI events correspond to Out (doors closed & brake released), Off (takeoff squat switch), On (touchdown squat switch), and In (door opened at gate).",
            "Tracks movements from gate departure to arrival at destination gate."
        },
        {
            "Which VHF transceiver is primarily dedicated to ACARS / ATSU data communications on modern airliners?",
            {"VHF 3 (VHF Center / VHF Data).", "VHF 1 (Captain's primary).", "VHF 2 (First Officer's primary)."},
            "VHF 3 (VHF Center / VHF Data).",
            "VHF 3 is standardly allocated for ACARS data link (or backup voice), while VHF 1 and VHF 2 are used for primary ATC voice communications.",
            "VHF 1 is left, VHF 2 is right, VHF 3 is dedicated to data/center."
        }
    };

}