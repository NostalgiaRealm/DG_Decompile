/*
 * FUN_1004eaa0 at 1004eaa0
 * undefined4 __thiscall FUN_1004eaa0(void * this, void * param_1, uint * param_2, undefined4 param_3, undefined4 param_4, uint param_5, uint param_6, uint param_7)
 * Address ranges: 1004eaa0-1004ecab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1004eaa0(void *this,void *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,uint param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  LPVOID local_28 [4];
  undefined4 *local_18;
  int local_14;
  
  FUN_1002d6f1(&local_18,0x200);
  iVar2 = FUN_100a160b((int *)&local_18,*param_2);
  FUN_1002d6f1(local_28,0x80);
  if (*(char *)(param_2[0x39] + 0x125) != '\x03') {
    FUN_100498b7((int *)param_2,(int *)local_28,param_6);
  }
  if (*(char *)(param_2[0x39] + 0x125) == '\x01') {
    puVar5 = param_2 + 0x7e;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = param_2 + 0x84;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    param_2[0x8a] = 0;
    param_2[0x8b] = 0;
    param_2[0xb0] = 0;
    param_2[0xb1] = 0;
    param_2[0xb2] = 0;
    param_2[0xb3] = 0;
  }
  if (*(char *)(param_2[0x39] + 0x125) == '\x01') {
    FUN_100516e6(this,param_2,(uint *)local_28,param_5,param_6,param_7);
    FUN_1004ef5e((int)param_2);
    uVar1 = param_2[0x7e];
    FUN_10049a6b((int *)param_2,(int *)local_28,uVar1,param_6);
    FUN_10049bfb((int *)param_2,(int *)local_28,uVar1,param_6,param_7);
    FUN_10049e35((int *)param_2,(int *)local_28,uVar1,param_6,param_7);
    FUN_100a138c((int *)param_2,(int *)local_28,0x2036);
    FUN_100a138c((int *)param_2,(int *)local_28,0x3e);
    FUN_100a068b((int)param_2,param_2[0x7e]);
  }
  FUN_100a19d8(*param_2,(int *)&local_18);
  if ((param_2[2] >> 3 & 1) != 0) {
    FUN_100a1a54(*param_2,(int *)&local_18);
  }
  if ((param_2[2] >> 4 & 1) != 0) {
    FUN_100a1a54(*param_2,(int *)&local_18);
  }
  if (*(char *)(param_2[0x39] + 0x125) == '\x01') {
    FUN_10049f42(param_2,(int *)&local_18,param_6,param_7);
    FUN_1004ee70((int)param_2,(int *)&local_18);
  }
  if (*(char *)((int)param_2 + 0x35) != '\0') {
    FUN_100a1c01((int *)&local_18);
  }
  FUN_100a165c((int *)&local_18,(int *)local_28,iVar2);
  FUN_100a14c1(param_1,local_18,local_14 - (int)local_18);
  thunk_FUN_100ad48c(local_28[0]);
  uVar3 = thunk_FUN_100ad48c(local_18);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

