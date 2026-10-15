/*
 * FUN_1009b558 at 1009b558
 * int __thiscall FUN_1009b558(void * this, int * param_1)
 * Address ranges: 1009b558-1009b687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1009b558(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *local_270;
  void *local_26c;
  longlong local_268;
  int local_260 [151];
  
  piVar7 = param_1;
  piVar8 = local_260;
  for (iVar4 = 0x95; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  local_26c = this;
  local_268 = FUN_1009b4b0(local_260,0x95);
  uVar5 = (uint)((ulonglong)local_268 >> 0x20);
  local_270 = (int *)local_268;
  uVar1 = FUN_100386c5((void *)((int)this + 0x24),(uint)local_270,uVar5);
  if (uVar1 != *(uint *)((int)this + 0x2c)) {
    iVar4 = *(int *)((int)this + 0x28);
    iVar2 = uVar1 * 0x18;
    if ((((*(int **)(iVar2 + iVar4) == local_270) && (*(uint *)(iVar2 + 4 + iVar4) == uVar5)) &&
        (puVar6 = (undefined4 *)(iVar4 + 0x10 + iVar2), puVar6 != (undefined4 *)0x0)) &&
       (piVar7 = (int *)*puVar6, piVar7 != (int *)0x0)) {
      uVar1 = 0;
      if (piVar7[1] != 0) {
        do {
          local_270 = (int *)(uVar1 * 0x254 + *piVar7);
          iVar4 = 0;
          local_260[0] = *local_270;
          while (local_270[iVar4] == local_260[iVar4]) {
            iVar4 = iVar4 + 1;
            if (iVar4 == 0x95) {
              return *local_270;
            }
          }
          uVar1 = uVar1 + 1;
          this = local_26c;
        } while (uVar1 < (uint)piVar7[1]);
      }
      goto LAB_1009b64d;
    }
  }
  local_270 = (int *)FUN_100cfd55(0xc);
  if (local_270 == (int *)0x0) {
    local_270 = (int *)0x0;
  }
  else {
    *local_270 = 0;
    local_270[1] = 0;
    local_270[2] = 0;
  }
  FUN_1009bf65((void *)((int)this + 0x24),(uint *)&local_268,&local_270);
  piVar7 = local_270;
LAB_1009b64d:
  if ((piVar7 == (int *)0x0) || (uVar3 = FUN_1009c28b(piVar7,param_1), (char)uVar3 == '\0')) {
    iVar4 = 0;
  }
  else {
    *(undefined4 *)(piVar7[1] * 0x254 + -0x254 + *piVar7) = *(undefined4 *)((int)this + 0x34);
    iVar4 = *(int *)((int)this + 0x34);
    *(int *)((int)this + 0x34) = iVar4 + 2;
  }
  return iVar4;
}

