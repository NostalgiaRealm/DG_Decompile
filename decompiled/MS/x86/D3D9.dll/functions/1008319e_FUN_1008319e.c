/*
 * FUN_1008319e at 1008319e
 * undefined __thiscall FUN_1008319e(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1008319e-10083220
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008319e(void *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = FUN_10083133(this,*(int **)(param_1 + 0xc),param_2,param_3);
  if ((iVar3 != -0x7fffbffb) && (iVar3 < 0)) {
    bVar1 = FUN_100828d9(this);
    if (bVar1) {
      (*(code *)**(undefined4 **)this)(param_2,param_3);
      cVar2 = FUN_100c1862(*(void **)(*(int *)((int)this + 0x40) + 0x172c0));
      if (cVar2 == '\0') {
        uVar4 = FUN_100bb258(*(int *)(*(int *)((int)this + 0x44) + 0x1304));
      }
      else {
        uVar4 = 0;
      }
      *(undefined8 *)((int)this + 0xe8) = uVar4;
    }
  }
  return;
}

