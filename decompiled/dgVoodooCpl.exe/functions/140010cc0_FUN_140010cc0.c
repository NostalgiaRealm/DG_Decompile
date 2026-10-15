/*
 * FUN_140010cc0 at 140010cc0
 * undefined8 __fastcall FUN_140010cc0(longlong param_1)
 * Address ranges: 140010cc0-140010d99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140010cc0(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar3;
  
  FUN_140011730(param_1);
  uVar4 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x328) != 0) {
    do {
      bVar1 = FUN_140012e80(*(longlong *)(param_1 + 0x480),
                            (ulonglong)*(uint *)(*(longlong *)(param_1 + 800) + uVar3 * 4),
                            *(int *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x490),
                            *(undefined4 *)(param_1 + 0x48c),*(char *)(param_1 + 0x498));
      if (bVar1) {
        uVar4 = 1;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x328);
        uVar5 = (uint)uVar3;
        if (uVar5 < uVar6) {
          uVar2 = uVar5 + 1;
          if (uVar2 < uVar6) {
            do {
              uVar3 = (ulonglong)uVar2;
              uVar6 = uVar2 - 1;
              uVar2 = uVar2 + 1;
              *(undefined4 *)(*(longlong *)(param_1 + 800) + (ulonglong)uVar6 * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 800) + uVar3 * 4);
              uVar6 = *(uint *)(param_1 + 0x328);
            } while (uVar2 < uVar6);
          }
          *(uint *)(param_1 + 0x328) = uVar6 - 1;
        }
        uVar3 = (ulonglong)(uVar5 - 1);
      }
      uVar6 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x328));
  }
  return uVar4;
}

