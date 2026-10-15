/*
 * FUN_1004b767 at 1004b767
 * undefined4 * __thiscall FUN_1004b767(void * this, undefined4 param_1, undefined4 param_2, int * param_3, undefined4 * param_4)
 * Address ranges: 1004b767-1004b81b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1004b767(void *this,undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *this_00;
  char cVar1;
  undefined4 *puVar2;
  
  this_00 = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x24) = 0;
  *this_00 = 0;
  FUN_1005c9cc((int *)((int)this + 0x28),0,0x38);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined1 *)((int)this + 0x138) = 0;
  *(undefined ***)this = &PTR_FUN_1005f588;
  *(undefined4 *)((int)this + 100) = param_2;
  *(int **)((int)this + 0x68) = param_3;
  *(undefined4 *)((int)this + 0x130) = 0xffffffff;
  FUN_10048199(this_00,&DAT_1005d2a0);
  cVar1 = (**(code **)(*param_3 + 0x30))();
  if (cVar1 == '\0') {
    puVar2 = &DAT_1005d270;
  }
  else {
    puVar2 = &DAT_1005d260;
  }
  FUN_10048199(this_00,puVar2);
  *(undefined4 *)((int)this + 0x6c) = *param_4;
  *(undefined4 *)((int)this + 0x70) = param_4[1];
  *(undefined4 *)((int)this + 0x74) = param_4[2];
  *(undefined4 *)((int)this + 0x78) = param_4[3];
  (**(code **)(**(int **)((int)this + 100) + 4))(*(int **)((int)this + 100));
  return this;
}

