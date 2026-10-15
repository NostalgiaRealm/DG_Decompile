/*
 * FUN_18004ee28 at 18004ee28
 * undefined8 * __cdecl FUN_18004ee28(void)
 * Address ranges: 18004ee28-18004ee2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18004ee28(void)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  float fVar4;
  
  puVar2 = (undefined8 *)FUN_18005fb88(0xdd8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0x100000001;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 0x18a) = 1;
    *(undefined4 *)(puVar2 + 0x1ad) = 0x100;
    *(undefined2 *)((longlong)puVar2 + 0xd6d) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[0x188] = 0;
    puVar2[0x189] = 0;
    puVar2[0x1a8] = 0;
    puVar2[0x1a9] = 0;
    puVar2[0x1aa] = 0;
    puVar2[0x1ab] = 0;
    puVar2[0x1ac] = 0;
    puVar2[0x1ae] = 0;
    SetRectEmpty((LPRECT)(puVar2 + 0x1a6));
    uVar3 = 0;
    do {
      uVar1 = (int)uVar3 + 1;
      fVar4 = (float)uVar3 / 255.0;
      *(float *)((longlong)puVar2 + uVar3 * 0xc + 0x48) = fVar4;
      *(float *)((longlong)puVar2 + uVar3 * 0xc + 0x44) = fVar4;
      *(float *)((longlong)puVar2 + uVar3 * 0xc + 0x40) = fVar4;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < 0x100);
    puVar2[0x1af] = 0;
    puVar2[0x1b0] = 0;
    puVar2[0x1b7] = 0;
    puVar2[0x1b8] = 0;
    puVar2[0x1b9] = 0;
    puVar2[0x1ba] = 0;
    puVar2[0x1b2] = 0;
    puVar2[0x1b1] = 0;
    puVar2[0x1b4] = 0;
    puVar2[0x1b3] = 0;
    puVar2[0x1b6] = 0;
    puVar2[0x1b5] = 0;
  }
  return puVar2;
}

