/*
 * FUN_100592d0 at 100592d0
 * undefined __thiscall FUN_100592d0(void * this, int * param_1)
 * Address ranges: 100592d0-10059371
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100592d0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  SIZE_T SVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 8));
  *(undefined4 *)((int)this + 8) = 0;
  uVar6 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if (param_1[1] != 0) {
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)this + 0x10);
      if (*(int *)((int)this + 0xc) == iVar2) {
        if (iVar2 == 0) {
          uVar3 = 0x10;
        }
        else {
          uVar3 = iVar2 * 2;
        }
        SVar4 = (SIZE_T)((ulonglong)uVar3 * 4);
        if ((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) {
          SVar4 = 0xffffffff;
        }
        puVar5 = (undefined4 *)FUN_1005c789(SVar4);
        if (puVar5 != (undefined4 *)0x0) {
          FUN_1005ca00(puVar5,*(undefined4 **)((int)this + 8),*(int *)((int)this + 0x10) << 2);
          thunk_FUN_1005c76c(*(LPVOID *)((int)this + 8));
          *(undefined4 **)((int)this + 8) = puVar5;
          *(uint *)((int)this + 0x10) = uVar3;
          goto LAB_10059353;
        }
      }
      else {
LAB_10059353:
        *(undefined4 *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 4) =
             *(undefined4 *)(iVar1 + uVar6 * 4);
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[1]);
  }
  return;
}

