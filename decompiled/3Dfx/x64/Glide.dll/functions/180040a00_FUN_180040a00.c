/*
 * FUN_180040a00 at 180040a00
 * undefined4 __fastcall FUN_180040a00(longlong param_1, uint param_2)
 * Address ranges: 180040a00-180040b45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180040a00(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res10 [6];
  
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar7 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 800) + uVar7 * 4) == param_2) {
        if ((int)uVar7 == -1) {
          return 0;
        }
        if (*(int *)(param_1 + 0x434 + uVar7 * 4) == -1) {
          *(undefined4 *)(param_1 + 0x434 + uVar7 * 4) = 0;
          uVar5 = FUN_18004a89c(*(longlong **)(param_1 + 0x480),(ulonglong)param_2,
                                *(int *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x490),
                                *(undefined4 *)(param_1 + 0x48c),*(char *)(param_1 + 0x498));
          if ((char)uVar5 != '\0') {
            lVar2 = *(longlong *)(param_1 + 0x480);
            uVar6 = 2;
            do {
              plVar3 = *(longlong **)(lVar2 + 0x6b0 + (ulonglong)param_2 * 0x18c0);
              iVar4 = (**(code **)(*plVar3 + 0xf0))(plVar3,0x1c,uVar6,local_res10);
              if ((((iVar4 == 0) && (local_res10[0] != 0)) &&
                  (plVar3 = *(longlong **)(lVar2 + 0x6b0 + (ulonglong)param_2 * 0x18c0),
                  iVar4 = (**(code **)(*plVar3 + 0xf0))(plVar3,0x39,uVar6,local_res10), iVar4 == 0))
                 && (local_res10[0] != 0)) {
                *(char *)(param_1 + uVar7 + 0x334 +
                         (ulonglong)*(uint *)(param_1 + 0x434 + uVar7 * 4) * 0x10) = (char)uVar6;
                piVar1 = (int *)(param_1 + 0x434 + uVar7 * 4);
                *piVar1 = *piVar1 + 1;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < 0x21);
            FUN_18004ac4c(*(longlong *)(param_1 + 0x480),param_2);
          }
        }
        return *(undefined4 *)(param_1 + 0x434 + uVar7 * 4);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x328));
  }
  return 0;
}

