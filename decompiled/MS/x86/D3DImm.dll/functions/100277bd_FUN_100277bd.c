/*
 * FUN_100277bd at 100277bd
 * undefined __thiscall FUN_100277bd(void * this, int param_1, uint * param_2, int param_3, int param_4, int param_5, undefined1 param_6)
 * Address ranges: 100277bd-100278ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100277bd(void *this,int param_1,uint *param_2,int param_3,int param_4,int param_5,
            undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x1d54);
  FUN_1005c1d0((int *)(iVar1 + 0x11c0));
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    if (*param_2 != *(uint *)((int)this + 0x2140)) {
      *(uint *)((int)this + 0x2140) = *param_2;
      uVar2 = FUN_1002498e((void *)((int)this + 0x1dd0),param_2);
      *(undefined4 *)((int)this + 0x2144) = uVar2;
    }
    param_2 = *(uint **)((int)this + 0x2144);
  }
  iVar1 = *(int *)((int)this + 0x1d54);
  this_00 = (int *)(iVar1 + 0x11c0);
  uVar2 = *(undefined4 *)(*(int *)(param_3 + 0x28) + *(int *)(param_3 + 0x38) * 8);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_1005c0f0(this_00,0x1c);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 0x1c;
      puVar3[2] = this;
      puVar3[3] = param_1;
      puVar3[4] = param_2;
      puVar3[5] = uVar2;
      puVar3[6] = param_4;
      puVar3[7] = param_5;
      *(undefined1 *)(puVar3 + 8) = param_6;
      puVar4 = (undefined4 *)((int)puVar3 + 0x27U & 0xfffffffc);
      *puVar4 = 0;
      *puVar3 = FUN_100278ef;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_100278e2;
    }
    FUN_1001b0b6(this_00);
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar3 = this;
  puVar3[1] = param_1;
  puVar3[2] = param_2;
  puVar3[3] = uVar2;
  puVar3[4] = param_4;
  puVar3[5] = param_5;
  *(undefined1 *)(puVar3 + 6) = param_6;
  FUN_100278ef(puVar3);
LAB_100278e2:
  *this_00 = 0;
  return;
}

