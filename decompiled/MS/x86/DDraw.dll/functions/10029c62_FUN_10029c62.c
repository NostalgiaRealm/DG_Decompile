/*
 * FUN_10029c62 at 10029c62
 * undefined4 * __thiscall FUN_10029c62(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined4 param_4, int param_5, undefined4 param_6, undefined2 * param_7, undefined4 * param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined1 param_13, byte param_14)
 * Address ranges: 10029c62-10029e6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10029c62(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4
            ,int param_5,undefined4 param_6,undefined2 *param_7,undefined4 *param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined1 param_13,byte param_14)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined ***)this = &PTR_LAB_10063790;
  puVar3 = param_3;
  if (param_3 == (undefined4 *)0x0) {
    pvVar2 = (void *)FUN_10060bca(0xd0);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_10005dc5(pvVar2,-(uint)(param_5 != 0) & param_5 + 0x3cU,param_4,param_6,param_10,
                            param_11,param_13);
    }
  }
  *(undefined4 **)((int)this + 4) = puVar3;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_1006463c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if ((puVar3 != (undefined4 *)0x0) && (param_3 == (undefined4 *)0x0)) {
    puVar3[0x32] = param_14 | 4;
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  FUN_10060d45((int *)((int)this + 0x34),0,0xc4);
  *(undefined4 *)((int)this + 0xf8) = param_2;
  *(undefined4 *)((int)this + 0x100) = param_1;
  *(int *)((int)this + 0xfc) = param_5;
  *(undefined ***)this = &PTR_FUN_1006421c;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  local_c = CONCAT22(param_7[2],*param_7);
  local_8 = CONCAT22(param_7[0xc],param_7[10]);
  *(undefined4 *)((int)this + 0x148) = local_c;
  *(undefined4 *)((int)this + 0x14c) = local_8;
  puVar3 = (undefined4 *)((int)this + 0x150);
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *param_8;
    param_8 = param_8 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x1cc) = param_9;
  *(undefined4 *)((int)this + 0x1d4) = param_12;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 1;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  piVar1 = *(int **)((int)this + 0x100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  pvVar2 = (void *)((int)this + 0x2c);
  FUN_1002b299(pvVar2,&DAT_10062560,0);
  FUN_1002b299(pvVar2,&DAT_100623c0,(int)this + 0xc);
  FUN_1002b299(pvVar2,&DAT_100623d0,0);
  FUN_1002b299(pvVar2,&DAT_100623e0,0);
  FUN_1002b299(pvVar2,&DAT_100623f0,0);
  FUN_1002b299(pvVar2,&DAT_10062400,0);
  FUN_1002b299(pvVar2,&DAT_10062430,(int)this + 0xc);
  return this;
}

