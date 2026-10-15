/*
 * FUN_10004db5 at 10004db5
 * undefined4 __thiscall FUN_10004db5(void * this, int param_1, int param_2, uint param_3, void * param_4, int param_5, uint param_6, int param_7, uint param_8, int param_9, undefined4 param_10, char param_11)
 * Address ranges: 10004db5-10005005
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10004db5(void *this,int param_1,int param_2,uint param_3,void *param_4,int param_5,uint param_6,
            int param_7,uint param_8,int param_9,undefined4 param_10,char param_11)

{
  void *this_00;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_ec [2];
  undefined1 auStack_e4 [204];
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  int local_c;
  char local_6;
  char local_5;
  
  local_10 = 0x8876086c;
  if ((param_9 == 0) || (*(int *)(param_9 + 0x980) == 0)) {
    local_6 = '\0';
  }
  else {
    local_6 = '\x01';
    if (2 < *(byte *)(*(int *)(param_9 + 0x97c) + 1)) {
      local_5 = '\x01';
      goto LAB_10004df8;
    }
  }
  local_5 = '\0';
LAB_10004df8:
  uVar5 = MXCSR;
  if ((((*(int *)(param_7 + 4) != 3) &&
       (uVar1 = (param_2 + param_3) * *(int *)(param_7 + 0xc),
       uVar1 < *(uint *)((int)param_4 + 0x10) || uVar1 - *(uint *)((int)param_4 + 0x10) == 0)) &&
      ((*(char *)(param_7 + 0x15) == '\x04' || (local_5 != '\0')))) &&
     ((*(uint *)((int)this + 0x587c) & *(uint *)(param_6 + 0x10)) == *(uint *)(param_6 + 0x10))) {
    local_14 = this;
    FUN_100ada8e(local_ec,0,0xcc);
    uVar5 = MXCSR;
    local_18 = MXCSR;
    MXCSR = 0x3fc0;
    local_c = 0;
    uVar1 = FUN_10010d67(param_4,0,0,&local_c,param_8 & 0xfffffffe);
    this_00 = local_14;
    if (-1 < (int)uVar1) {
      local_10 = CONCAT31(local_10._1_3_,*(int *)((int)local_14 + 0x4ac) != 0);
      if (local_6 == '\0') {
        uVar3 = FUN_10007e02(local_14,param_6,(int)local_ec);
        if ((char)uVar3 != '\0') {
          uVar1 = 0;
          if ((char)local_10 != '\0') {
            uVar1 = 2;
          }
          FUN_10016cb2(this_00,local_ec,local_c,param_7,
                       -(uint)(*(int *)((int)this_00 + 0x4b0) != 0) & 4 | uVar1 | 1,param_2,param_3,
                       param_1,param_8 == 1);
        }
      }
      else {
        param_8 = 0;
        if (*(int *)(param_6 + 8) != 0) {
          do {
            uVar1 = (uint)*(byte *)(param_8 + 0x9c + param_6);
            iVar4 = (int)*(char *)(param_6 + 0x14 + uVar1 * 8);
            local_ec[uVar1 * 3] =
                 *(int *)(*(int *)((int)this_00 + iVar4 * 4 + 0x57bc) + 4) +
                 (uint)*(byte *)(param_6 + 0x17 + uVar1 * 8) * 4;
            auStack_e4[uVar1 * 0xc] = *(undefined1 *)(param_6 + 0x18 + uVar1 * 8);
            auStack_e4[uVar1 * 0xc + 1] = *(undefined1 *)(param_6 + 0x15 + uVar1 * 8);
            *(undefined4 *)(auStack_e4 + uVar1 * 0xc + -4) =
                 *(undefined4 *)((int)this_00 + iVar4 * 4 + 0x57fc);
            param_8 = param_8 + 1;
            uVar5 = local_18;
          } while (param_8 < *(uint *)(param_6 + 8));
        }
        puVar2 = *(undefined4 **)(param_9 + 0x984);
        iVar4 = *(int *)(param_9 + 0x980);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = FUN_1000cc79(iVar4);
          *(undefined4 **)(param_9 + 0x984) = puVar2;
        }
        FUN_1000cf55(local_14,iVar4,(undefined *)puVar2,*(int *)(param_9 + 0x168),(int)local_ec,
                     param_5,local_c,param_7,param_2,param_3,param_1,(char)local_10,param_11);
      }
      FUN_10010ef4((int)param_4);
      if ((char)local_10 != '\0') {
        *(byte *)((int)param_4 + 100) =
             *(byte *)((int)param_4 + 100) | ~(byte)(*(uint *)((int)param_4 + 0x34) >> 5) & 1;
      }
      local_10 = 0;
    }
  }
  MXCSR = uVar5;
  return local_10;
}

