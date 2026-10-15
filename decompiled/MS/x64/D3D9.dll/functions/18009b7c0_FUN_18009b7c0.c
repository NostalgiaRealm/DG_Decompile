/*
 * FUN_18009b7c0 at 18009b7c0
 * int __fastcall FUN_18009b7c0(longlong param_1, int param_2)
 * Address ranges: 18009b7c0-18009b92b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18009b7c0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong local_res20;
  undefined4 local_68;
  int local_64;
  uint local_60;
  uint uStack_5c;
  ulonglong uStack_58;
  
  if ((*(int *)(param_1 + 0x90) != -1) && (*(int *)(param_1 + 0x9c) == -1)) {
    if (*(int *)(param_1 + 0xa8) == 0x1c) {
      uVar1 = *(uint *)(param_1 + 0x34);
      uVar2 = *(uint *)(param_1 + 0x3c);
      uVar5 = FUN_1800e1704(*(longlong *)(*(longlong *)(param_1 + 0x6c) + 0x1938),uVar2 * uVar1);
      *(uint *)(param_1 + 0x9c) = uVar5;
      if ((uVar5 != 0xffffffff) && (uVar1 != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x7c);
        uVar5 = 0;
        do {
          uVar6 = 0;
          if (uVar2 != 0) {
            do {
              local_68 = 0x1d;
              if (lVar3 == 0) {
                _local_60 = CONCAT44(uVar5,uVar6);
              }
              else {
                _local_60 = CONCAT44(1,uVar5);
              }
              uStack_58 = (ulonglong)(lVar3 == 0);
              local_64 = (-(uint)(lVar3 != 0) & 2) + 5;
              FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x6c) + 0x1938),&local_res20,
                            *(uint *)(param_1 + 0x9c),uVar6 + uVar5 * uVar2);
              plVar4 = *(longlong **)
                        (*(longlong *)(param_1 + 0x60) + 0x6d0 +
                        (ulonglong)*(uint *)(param_1 + 0x68) * 0x20);
              (**(code **)(*plVar4 + 0xa0))
                        (plVar4,*(undefined8 *)
                                 (param_1 + 0x74 + (ulonglong)(-(uint)(lVar3 != 0) & 8)),&local_68,
                         local_res20);
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar2);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
    }
    else {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x90);
    }
  }
  return *(int *)(param_1 + 0x9c) + param_2;
}

