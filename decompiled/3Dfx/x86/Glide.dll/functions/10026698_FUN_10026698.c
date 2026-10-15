/*
 * FUN_10026698 at 10026698
 * char __thiscall FUN_10026698(void * this, uint param_1, int param_2, int param_3, int param_4, char param_5, int param_6, char param_7)
 * Address ranges: 10026698-100267d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_10026698(void *this,uint param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
            char param_7)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this_00;
  undefined4 uStack_8;
  
  if (*(int *)(*(int *)((int)this + 0x3188) + 0x12e8) == 0) {
    uStack_8 = this;
    cVar2 = FUN_1001d0f4(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return cVar2;
  }
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  uStack_8 = (void *)((uint)this & 0xffffff);
  FUN_100360e0(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10026779:
    puVar3 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar3 = this;
    puVar3[1] = param_1;
    puVar3[2] = param_2;
    puVar3[3] = param_3;
    puVar3[4] = param_4;
    *(char *)(puVar3 + 5) = param_5;
    puVar3[6] = param_6;
    *(char *)(puVar3 + 7) = param_7;
    puVar3[8] = (int)&uStack_8 + 3;
    FUN_100267d5(puVar3);
  }
  else {
    puVar3 = (undefined4 *)FUN_10036000(this_00,0x24);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10021ec0(this_00);
      goto LAB_10026779;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 0x24;
    puVar3[2] = this;
    puVar3[3] = param_1;
    puVar3[4] = param_2;
    puVar3[5] = param_3;
    puVar3[6] = param_4;
    *(char *)(puVar3 + 7) = param_5;
    puVar3[8] = param_6;
    *(char *)(puVar3 + 9) = param_7;
    puVar3[10] = (int)&uStack_8 + 3;
    puVar4 = (undefined4 *)((int)puVar3 + 0x2fU & 0xfffffffc);
    *puVar4 = 0;
    *puVar3 = FUN_100267d5;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_100267ba;
    }
  }
  *this_00 = 0;
LAB_100267ba:
  FUN_10036a10(*(int *)((int)this + 0x3188) + 0x11c0);
  return uStack_8._3_1_;
}

