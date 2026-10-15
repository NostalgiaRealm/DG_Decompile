/*
 * FUN_1004c05e at 1004c05e
 * undefined __thiscall FUN_1004c05e(void * this, uint param_1, int param_2, int param_3, int param_4, char param_5)
 * Address ranges: 1004c05e-1004c0d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1004c05e(void *this,uint param_1,int param_2,int param_3,int param_4,char param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 8) {
    if (iVar3 == 9) {
      puVar1 = (uint *)((int)this + 0x18);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + param_1;
      *(uint *)((int)this + 0x1c) =
           *(int *)((int)this + 0x1c) + param_2 + (uint)CARRY4(uVar2,param_1);
      goto LAB_1004c08c;
    }
    if (iVar3 != 10) {
      if (iVar3 == 0xb) {
        if (*(int *)((int)this + 0x18) != 0 || *(int *)((int)this + 0x1c) != 0) goto LAB_1004c08c;
      }
      else if (iVar3 != 0xc) goto LAB_1004c08c;
    }
  }
  *(int *)((int)this + 0x1c) = param_2;
  *(uint *)((int)this + 0x18) = param_1;
LAB_1004c08c:
  if (param_5 != '\0') {
    FUN_1004c049((int)this);
    if ((*(int *)((int)this + 0x20) == param_3) && (*(int *)((int)this + 0x24) == param_4)) {
      *(undefined4 *)((int)this + 0x34) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  return;
}

