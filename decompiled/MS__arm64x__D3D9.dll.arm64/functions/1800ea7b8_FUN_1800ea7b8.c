/*
 * FUN_1800ea7b8 at 1800ea7b8
 * undefined FUN_1800ea7b8(void)
 * Address ranges: 1800ea7b8-1800ea887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ea7b8(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined1 auStack_80 [64];
  
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    FUN_1800e8038();
    uVar5 = 0;
    if (param_2 != 0) {
      do {
        lVar2 = uVar5 * 0x20;
        if (*(int *)(lVar2 + param_3) == 0) {
          plVar3 = *(longlong **)(param_3 + 8 + lVar2);
          piVar4 = (int *)(**(code **)(*plVar3 + 0x50))(plVar3,auStack_80);
          FUN_1800f1b78(*(undefined8 *)(param_1 + 0xb18),*(undefined8 *)(param_3 + 8 + lVar2),
                        *(undefined4 *)(lVar2 + param_3 + 0x10),*piVar4 == 0,
                        *(undefined8 *)(param_1 + 0xb10),param_1,
                        *(undefined4 *)(lVar2 + param_3 + 0x18),*(undefined8 *)(param_1 + 0xb78));
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
      } while (uVar1 < param_2);
    }
  }
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0xd0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

