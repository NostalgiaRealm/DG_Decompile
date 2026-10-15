/*
 * FUN_1800405f4 at 1800405f4
 * undefined4 __fastcall FUN_1800405f4(longlong param_1, uint param_2)
 * Address ranges: 1800405f4-18004073b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800405f4(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 local_48;
  uint local_44;
  undefined8 local_40;
  
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar7 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 800) + uVar7 * 4) == param_2) {
        if ((int)uVar7 == -1) {
          return 0;
        }
        if (*(int *)(param_1 + 0x434 + uVar7 * 4) == -1) {
          *(undefined4 *)(param_1 + 0x434 + uVar7 * 4) = 0;
          uVar5 = FUN_180045010(*(LPVOID *)(param_1 + 0x480),param_2,*(int *)(param_1 + 0x488));
          if ((char)uVar5 != '\0') {
            lVar2 = *(longlong *)(param_1 + 0x480);
            uVar6 = 2;
            do {
              plVar3 = *(longlong **)(lVar2 + 0x6d0 + (ulonglong)param_2 * 0x20);
              local_48 = 0x1c;
              local_40 = 0;
              local_44 = uVar6;
              iVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,4,&local_48);
              if (iVar4 == 0) {
                local_48 = 0x39;
                if (((local_40._4_4_ != 0) &&
                    (plVar3 = *(longlong **)(lVar2 + 0x6d0 + (ulonglong)param_2 * 0x20),
                    iVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,4,&local_48), iVar4 == 0)) &&
                   (local_40._4_4_ != 0)) {
                  *(char *)(param_1 + uVar7 + 0x334 +
                           (ulonglong)*(uint *)(param_1 + 0x434 + uVar7 * 4) * 0x10) = (char)uVar6;
                  piVar1 = (int *)(param_1 + 0x434 + uVar7 * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < 0x11);
            FUN_1800453d4(*(longlong *)(param_1 + 0x480),param_2);
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

