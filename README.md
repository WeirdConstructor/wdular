# Wdular - Weird DIY Modular Software Hybrid Synthesizer (Controller).

This project is about creating an open source hardware
controller for the HexoSynth modular synthesizer.

See also the [HexoSynth Project Repository](https://github.com/WeirdConstructor/HexoSynth)
for more information about the actual synthesizer.

The hardware is going to feature:

- Knobs for parameters.
- Banana plugs for patching modules.
- Feedback LEDs.

The idea is, to make a hardware module for each (or at least some)
HexoSynth module.

Each module will be built using the following hardware:

- 10k Potentiometers
- Banana jacks
- LEDs of your preferred color
- Arduino Nano (you can get cheap clones for ~3-4€) for easy entry
- Perfboard layouts for low tech DIY electronics
- 3D printed modular case
- 3D printed frontpanel with cutouts for labels, knobs, jacks and feedback LEDs.

This is a long term project, so don't expect super fast progress as I have a
full time job and still develop HexoSynth. I expect this stuff to take multiple
years.

## Contact the Author

You can reach me via Discord or Mastodon. I'm joined most public Rust Discord
servers, especially the "Rust Audio" Discord server. I am also on freenode.net,
for instance in the `#lad` channel (nick `weirdctr`).

## Support Development

You can support me (and the development of this project) via Liberapay:

<a href="https://liberapay.com/WeirdConstructor/donate"><img alt="Donate using Liberapay" src="https://liberapay.com/assets/widgets/donate.svg"></a>

## License

This project is licensed under the GNU Affero General Public License Version 3 or
later.

<p xmlns:cc="http://creativecommons.org/ns#" >
Any non source code files (pictures, schematics, blender files, STL files, ...) are
licensed under
<a href="http://creativecommons.org/licenses/by-sa/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">
CC BY-SA 4.0
<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1">
<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1">
<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/sa.svg?ref=chooser-v1">
</a></p>

### Why (A)GPL?

Picking a license for my code bothered me for a long time. I read many
discussions about this topic. Read the license explanations. And discussed
this matter with other developers.

First about _why I write code for free_ at all, the reasons are:

- It's my passion to write computer programs. In my free time I can
write the code I want, when I want and the way I want. I can freely
allocate my time and freely choose the projects I want to work on.
- To help a friend or member of my family.
- To solve a problem I have.
- To learn something new.

Those are the reasons why I write code for free. Now the reasons
_why I publish the code_, when I could as well keep it to myself:

- So that it may bring value to users and the free software community.
- Show my work as an artist.
- To get into contact with other developers.
- To exchange knowledge and help other developers.
- And it's a nice change to put some more polish on my private projects.

Most of those reasons don't yet justify (A)GPL. The main point of the (A)GPL, as far
as I understand: The (A)GPL makes sure the software stays free software until
eternity. That the _end user_ of the software always stays in control. That the users
have the means to adapt the software to new platforms or use cases.
Even if the original authors don't maintain the software anymore.
It ultimately prevents _"vendor lock in"_. I really dislike vendor lock in,
especially as developer. Especially as developer I want and need to stay
in control of the computers and software I use.

Another point is, that my work (and the work of any other developer) has a
value. If I give away my work without _any_ strings attached, I effectively
work for free. This compromises the price I (and potentially other developers)
can demand for the skill, workforce and time.

This makes two reasons for me to choose the (A)GPL:

1. I do not want to support vendor lock in scenarios for free.
   I want to prevent those when I have a choice, when I invest my private
   time to bring value to the end users.
2. I don't want to low ball my own (and other developer's) wage and prices
   by giving away the work I spent my scarce private time on with no strings
   attached. I do not want companies to be able to use it in closed source
   projects to drive a vendor lock in scenario.

We can discuss relicensing of my code or project if you are interested in using
it in a closed source project. Bear in mind, that I can only relicense the
parts of the project I wrote. If the project contains GPL code from other
projects and authors, I can't relicense it.
