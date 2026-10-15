/*
 * FUN_10070b06 at 10070b06
 * undefined __thiscall FUN_10070b06(void * this, int param_1, int * param_2)
 * Address ranges: 10070b06-10070bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10070b06(void *this,int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint local_40;
  undefined1 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_14;
  
  iVar1 = *(int *)(param_1 + 0x474);
  if ((iVar1 == -1) || (iVar1 == 0)) {
    uVar2 = 0x36;
    if (*(uint *)(param_1 + 0x310) == *(uint *)(param_1 + 0x224)) {
      uVar2 = 0x1b;
    }
    FUN_10072b96(this,param_1,param_2,uVar2 | *(uint *)(param_1 + 0x470),(uint *)(param_1 + 0x310),
                 (uint *)(param_1 + 0x3c0));
  }
  else {
    local_40 = *(uint *)(param_1 + 0x2b0);
    local_3c = (undefined1)((uint)iVar1 >> 0x10);
    local_30 = 0xffffffff;
    local_2c = 0xffffffff;
    local_28 = 0xffffffff;
    local_24 = 0xffffffff;
    FUN_100c40de(0xffffffe4,
                 (uint)CONCAT11((char)((uint)iVar1 >> 0x18),*(undefined1 *)(param_1 + 0x314)));
    local_14 = *(uint *)(param_1 + 0x470) | 0x37;
    FUN_10072b96(this,param_1,param_2,local_14,(uint *)(param_1 + 0x310),&local_40);
  }
  *(undefined4 *)(param_1 + 0x474) = 0xffffffff;
  return;
}

