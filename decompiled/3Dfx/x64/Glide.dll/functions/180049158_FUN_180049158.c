/*
 * FUN_180049158 at 180049158
 * undefined __fastcall FUN_180049158(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 180049158-180049216
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049158(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_68 [64];
  
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    FUN_1800476b0(param_1);
    uVar5 = 0;
    if (param_2 != 0) {
      do {
        lVar3 = uVar5 * 0x20;
        if (*(int *)(param_3 + lVar3) == 0) {
          plVar1 = *(longlong **)(param_3 + 8 + lVar3);
          piVar2 = (int *)(**(code **)(*plVar1 + 0x50))(plVar1,local_68);
          FUN_180043928(*(longlong **)(param_1 + 0xb18),*(ulonglong *)(param_3 + 8 + lVar3),
                        (ulonglong)*(uint *)(param_3 + 0x10 + lVar3),(uint)(*piVar2 == 0),
                        *(longlong *)(param_1 + 0xb10),param_1,
                        *(undefined4 *)(param_3 + 0x18 + lVar3),*(longlong *)(param_1 + 0xb78));
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < param_2);
    }
  }
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0xd0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

