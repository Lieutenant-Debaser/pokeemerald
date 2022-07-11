# Changes

## Technical
### Fixes
- [Dismounting Surf Plays Proper Ground FX](https://github.com/pret/pokeemerald/wiki/Surfing-Dismount-Ground-Effects)

### Modifications
- [WaitForVBlank Function Optimization](https://github.com/pret/pokeemerald/wiki/Improving-the-WaitForVBlank-function)
- [EWRAM Optimization for Summary Screen](https://github.com/pret/pokeemerald/wiki/Make-space-for-EWRAM-Data-for-Summary-screen)
- [Better Reflection System for Metatiles](https://github.com/pret/pokeemerald/wiki/Reflections)
- [Pokemon Centers Don't Check Union Rooms](https://github.com/pret/pokeemerald/wiki/Disabling-Union-Room-check-when-entering-Pok%C3%A9mon-Centers)
- [Deletion of Redundant Move Reactions](https://github.com/pret/pokeemerald/wiki/Remove-the-functionally-redundant-move-grammar-tables)
- [Mugshot Battle Transition Framework](https://www.pokecommunity.com/showpost.php?p=10212533&postcount=161)
- Removal of Check for Mystery Event Flags for SS Tidal
- Implementation of Mewtwo field object and sprite, which was imported from the [FireRed decompilation project](https://github.com/pret/pokefirered).


## Field Mechanics
- [Reuse Repels Prompt](https://github.com/pret/pokeemerald/wiki/Prompt-for-reusing-Repels)
- [Chain Fishing](https://github.com/pret/pokeemerald/wiki/Chain-Fishing)
- [Scripting for IV-Checking NPC](https://www.pokecommunity.com/showpost.php?p=10160888&postcount=71)
- [New Field Move Rock Climb](https://github.com/ghoulslash/pokeemerald/tree/rock-climb)

## Battle Mechanics
- [Badge Boost Nerf to +3%](https://github.com/pret/pokeemerald/wiki/Remove-badge-boosts#1-remove-badge-boosts-from-damage-calculations)
- [Foreign Pokemon Obedience Scaling Granularity](https://github.com/pret/pokeemerald/wiki/Remove-badge-boosts#1-remove-badge-boosts-from-damage-calculations)
- [New Battle Move Rock Climb](https://github.com/ghoulslash/pokeemerald/tree/rock-climb)


## Quality of Life
- [No Extra Prompt When Saving](https://github.com/pret/pokeemerald/wiki/Remove-the-extra-save-confirmation)
- [Player Can Run Indoors](https://github.com/pret/pokeemerald/wiki/Allow-running-indoors)
- [Infinite-Use TMs](https://github.com/pret/pokeemerald/wiki/Infinite-TM-usage)
- [Pokemon Centers Ignore Eggs in Party](https://github.com/pret/pokeemerald/wiki/Pokecenters-Disregard-Eggs)
- [Nature Influence on EVs Visible in Stats Screen](https://github.com/pret/pokeemerald/wiki/Colored-stats-by-nature-in-summary-screen)
- [Summary Screen Acts as Circular Queue](https://www.pokecommunity.com/showpost.php?p=10060875&postcount=27)
- [Ash Collected in Soot Sack Displayed on Item Use](https://www.pokecommunity.com/showpost.php?p=10222284&postcount=178)
- [Pressing SELECT Toggles Stats with EVs Gained](https://www.pokecommunity.com/showpost.php?p=10161688&postcount=77)


## New Areas
- Battle Frontier
    - Gem Shop: Sells evolution stones.

- Route 111
    - East Area: New connection with cave that houses the Old Sea Map.

- Faraway Island
    - Technically in the game, but is now accessible by obtaining the Old Sea Map and going to the ship in Lilycove.
    - Mew is level 70 and has the moves Extrasensory, Calm Mind, Future Sight, and Recover.

- Ominous Caverns (Currently Inaccessible)
    - Uses leftover music from FRLG.
    - Cave area containing a few hard to get Pokemon and Mewtwo.
    - Accessing Mewtwo battle requires having Mew in party (indicated by braille signs).
    - Mewtwo is level 70 and has the moves Psychic, Future Sight, Shadow Ball, and Safeguard.

## New Items
- HM09 (Rock Climb)
    - Obtained from Lanette after defeating the Elite Four.

- Shiny Charm
    - Obtained from Mom after completing the National Dex.
    - Code implemented by chaining fishing also implemented this item's functionality as well.
