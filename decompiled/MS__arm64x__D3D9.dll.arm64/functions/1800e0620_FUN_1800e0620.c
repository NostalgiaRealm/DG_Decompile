/*
 * FUN_1800e0620 at 1800e0620
 * undefined FUN_1800e0620(void)
 * Address ranges: 1800e0620-1800e0717
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800e0620(void)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  float fVar5;
  
  puVar3 = (undefined8 *)FUN_180102f80(0xdd8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[4] = 0x100000001;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 0x18a) = 1;
    *(undefined4 *)(puVar3 + 0x1ad) = 0x100;
    *(undefined2 *)((longlong)puVar3 + 0xd6d) = 0;
    pcVar2 = __imp_USER32_dll_SetRectEmpty;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0x188] = 0;
    puVar3[0x189] = 0;
    puVar3[0x1a8] = 0;
    puVar3[0x1a9] = 0;
    puVar3[0x1aa] = 0;
    puVar3[0x1ab] = 0;
    puVar3[0x1ac] = 0;
    puVar3[0x1ae] = 0;
    (*pcVar2)(puVar3 + 0x1a6);
    uVar4 = 0;
    do {
      uVar1 = (int)uVar4 + 1;
      fVar5 = (float)uVar4 / 255.0;
      *(float *)((longlong)puVar3 + uVar4 * 0xc + 0x48) = fVar5;
      *(float *)((longlong)puVar3 + uVar4 * 0xc + 0x44) = fVar5;
      *(float *)((longlong)puVar3 + uVar4 * 0xc + 0x40) = fVar5;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < 0x100);
    puVar3[0x1af] = 0;
    puVar3[0x1b0] = 0;
    puVar3[0x1b7] = 0;
    puVar3[0x1b8] = 0;
    puVar3[0x1b9] = 0;
    puVar3[0x1ba] = 0;
    puVar3[0x1b2] = 0;
    puVar3[0x1b1] = 0;
    puVar3[0x1b4] = 0;
    puVar3[0x1b3] = 0;
    puVar3[0x1b6] = 0;
    puVar3[0x1b5] = 0;
  }
  return puVar3;
}

