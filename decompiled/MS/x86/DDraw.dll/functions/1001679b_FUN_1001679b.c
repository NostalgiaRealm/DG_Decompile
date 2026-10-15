/*
 * FUN_1001679b at 1001679b
 * undefined __thiscall FUN_1001679b(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1001679b-1001681d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001679b(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_10016730(this,*(int **)(param_1 + 0xc),param_2,param_3);
  if ((iVar2 != -0x7fffbffb) && (iVar2 < 0)) {
    uVar3 = FUN_10015e84(this);
    if ((char)uVar3 != '\0') {
      (*(code *)**(undefined4 **)this)(param_2,param_3);
      cVar1 = FUN_1005054c(*(void **)(*(int *)((int)this + 0x40) + 0x172c0));
      if (cVar1 == '\0') {
        uVar4 = FUN_10052e8d(*(void **)(*(int *)((int)this + 0x44) + 0x1304));
      }
      else {
        uVar4 = 0;
      }
      *(undefined8 *)((int)this + 0xe8) = uVar4;
    }
  }
  return;
}

