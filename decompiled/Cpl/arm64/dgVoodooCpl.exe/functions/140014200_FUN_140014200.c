/*
 * FUN_140014200 at 140014200
 * int __cdecl FUN_140014200(longlong * param_1)
 * Address ranges: 140014200-140014207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_140014200(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  FUN_140013478((longlong)param_1);
  iVar7 = 0;
  uVar6 = 0;
  if ((int)param_1[0x65] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar2 = FUN_140014c38(param_1[0x90],(ulonglong)*(uint *)(param_1[100] + uVar6 * 4),
                            (int)param_1[0x91]);
      if ((uVar2 & 1) == 0) {
        uVar4 = *(uint *)(param_1 + 0x65);
        uVar1 = uVar5;
        if (uVar5 < uVar4) {
          while (uVar3 = uVar1 + 1, uVar3 < uVar4) {
            *(undefined4 *)(param_1[100] + (ulonglong)uVar1 * 4) =
                 *(undefined4 *)(param_1[100] + (ulonglong)uVar3 * 4);
            uVar1 = uVar3;
            uVar4 = *(uint *)(param_1 + 0x65);
          }
          *(uint *)(param_1 + 0x65) = uVar4 - 1;
        }
        uVar5 = uVar5 - 1;
      }
      else if (*(char *)(param_1[0x90] + (ulonglong)*(uint *)(param_1[100] + uVar6 * 4) * 0x20 +
                        0x34d) == '\0') {
        iVar7 = 1;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
    } while (uVar5 + 1 < *(uint *)(param_1 + 0x65));
    if (iVar7 != 0) {
      return iVar7;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return 0;
}

