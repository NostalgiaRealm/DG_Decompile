/*
 * FUN_180030848 at 180030848
 * undefined FUN_180030848(void)
 * Address ranges: 180030848-18003091f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180030848(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30 [2];
  
  uVar4 = 1;
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((param_2 & 1) == 0) {
      if ((param_3 & 1) == 0) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
        (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined8 *)(param_1 + 0x20));
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
          iVar1 = (**(code **)(*plVar2 + 0xe8))(plVar2,*(undefined8 *)(param_1 + 0x20),0,0,0);
        } while (iVar1 == 1);
      }
      uVar3 = 5;
    }
    else {
      uVar3 = 4;
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
    iVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(param_1 + 0x18),0,uVar3,0,local_30)
    ;
    if (iVar1 == -0x7789fde4) {
      uVar4 = 2;
    }
    else if (-1 < iVar1) {
      uVar4 = 0;
      *param_4 = local_30[0];
    }
  }
  return uVar4;
}

