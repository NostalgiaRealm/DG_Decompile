/*
 * FUN_18001ff48 at 18001ff48
 * undefined __fastcall FUN_18001ff48(longlong param_1, longlong * param_2)
 * Address ranges: 18001ff48-18001ffeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ff48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  do {
    uVar8 = (ulonglong)((*(int *)(param_1 + 0x40) + 1 + uVar7) % 7);
    lVar3 = *(longlong *)(param_1 + 0x48 + uVar8 * 0x10);
    if (((lVar3 != 0) && (lVar3 <= *param_2)) && (*(longlong *)(param_1 + 0xb8) < lVar3)) {
      uVar5 = 6;
      do {
        uVar6 = (int)uVar5 - 1;
        puVar1 = (undefined8 *)(param_1 + 0xb8 + (ulonglong)uVar6 * 0x10);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + 0xb8 + uVar5 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 != 0);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x48 + uVar8 * 0x10);
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50 + uVar8 * 0x10);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 7);
  return;
}

