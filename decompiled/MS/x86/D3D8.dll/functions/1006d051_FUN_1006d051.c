/*
 * FUN_1006d051 at 1006d051
 * undefined __thiscall FUN_1006d051(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1006d051-1006d0d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006d051(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_1006cfe6(this,*(int **)(param_1 + 0xc),param_2,param_3);
  if ((iVar2 != -0x7fffbffb) && (iVar2 < 0)) {
    uVar3 = FUN_1006c738(this);
    if ((char)uVar3 != '\0') {
      (*(code *)**(undefined4 **)this)(param_2,param_3);
      cVar1 = FUN_1009f29a(*(void **)(*(int *)((int)this + 0x40) + 0x172c0));
      if (cVar1 == '\0') {
        uVar4 = FUN_10098c80(*(int *)(*(int *)((int)this + 0x44) + 0x1304));
      }
      else {
        uVar4 = 0;
      }
      *(undefined8 *)((int)this + 0xe8) = uVar4;
    }
  }
  return;
}

