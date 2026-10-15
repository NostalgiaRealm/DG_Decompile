/*
 * FUN_10011bf2 at 10011bf2
 * int __thiscall FUN_10011bf2(void * this, int param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6, undefined4 param_7, undefined4 param_8, int * param_9)
 * Address ranges: 10011bf2-10011cc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10011bf2(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,undefined4 param_7,undefined4 param_8,int *param_9)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 != 0) {
    local_10 = 0;
    local_14 = 0;
    local_c = 1;
    local_8 = 1;
    puVar1 = FUN_10020f74(this,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      local_10 = puVar1[6];
      local_14 = puVar1[5];
      local_c = puVar1[7];
      local_8 = puVar1[8];
      if (param_5 == 2) {
        param_5 = puVar1[4];
      }
      if (param_6 == 2) {
        param_6 = puVar1[3];
      }
    }
    pvVar2 = (void *)FUN_10060bca(0x108);
    if ((pvVar2 != (void *)0x0) &&
       (pvVar2 = (void *)FUN_1001b353(pvVar2,(int)this,*(undefined4 *)((int)this + 4),local_14,
                                      local_10,param_1,param_2,param_3,local_c,local_8,param_7,
                                      param_8,param_4,param_5,param_6), pvVar2 != (void *)0x0)) {
      uVar3 = FUN_1001b65c(pvVar2,param_9);
      if ((char)uVar3 != '\0') {
        return (int)pvVar2 + 0xc0;
      }
      FUN_1001b4a5((int)pvVar2 + 0xc0);
    }
  }
  return 0;
}

