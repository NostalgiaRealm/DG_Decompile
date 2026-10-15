/*
 * FUN_18008c5b0 at 18008c5b0
 * undefined FUN_18008c5b0(void)
 * Address ranges: 18008c5b0-18008c84b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18008c5b0(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
             undefined4 param_10)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar2 = (undefined8 *)FUN_180102f80(0x290);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    FUN_1800a2908(puVar2,param_1,uVar1,param_4,param_5,param_7,param_8,param_9,param_10,
                  *(int *)(*(longlong *)(param_1 + 8) + 0x7c) != 2);
    *puVar2 = &PTR_D3DPERF_GetStatus_180235838;
    lVar5 = *(longlong *)(param_1 + 0x1cf10);
    puVar2[10] = lVar5;
    lVar4 = *(longlong *)(param_1 + 0x1cf10);
    *(uint *)(puVar2 + 0xd) = uVar1;
    *(undefined8 *)((longlong)puVar2 + 0x7c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x8c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar2 + 0x94) = 0xffffffffffffffff;
    puVar2[0xc] = lVar4;
    *(undefined2 *)((longlong)puVar2 + 0xac) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x9c) = 0xffffffff;
    *(undefined8 *)((longlong)puVar2 + 0xa4) = 0;
    *(ulonglong *)((longlong)puVar2 + 0x6c) = lVar4 + (ulonglong)uVar1 * 0x1ac0 + 0x900;
    *(undefined8 *)((longlong)puVar2 + 0x74) = 0;
    lVar4 = *(longlong *)(param_1 + 0x1cf10);
    *(uint *)(puVar2 + 0x17) = uVar1;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xdc) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar2 + 0xe4) = 0xffffffffffffffff;
    puVar2[0x16] = lVar4;
    *(undefined2 *)((longlong)puVar2 + 0xfc) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xec) = 0xffffffff;
    *(undefined8 *)((longlong)puVar2 + 0xf4) = 0;
    *(ulonglong *)((longlong)puVar2 + 0xbc) = lVar4 + (ulonglong)uVar1 * 0x1ac0 + 0x900;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
    puVar2[0xb] = lVar5 + (ulonglong)uVar1 * 0x1ac0 + 0x900;
    puVar2[0x23] = 0;
    puVar2[0x22] = 0;
    puVar2[0x25] = 0;
    puVar2[0x24] = 0;
    uVar1 = *(uint *)(puVar2 + 4);
    lVar5 = puVar2[10];
    *(undefined2 *)((longlong)puVar2 + 0x18c) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x192) = 0;
    puVar2[0x26] = param_1;
    puVar2[0x27] = 0;
    *(uint *)(puVar2 + 0x29) = uVar1;
    puVar2[0x28] = lVar5;
    lVar4 = lVar5 + (ulonglong)uVar1 * 0x1ac0 + 0x900;
    *(longlong *)((longlong)puVar2 + 0x14c) = lVar4;
    *(undefined8 *)((longlong)puVar2 + 0x154) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x15c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x164) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x16c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar2 + 0x174) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar2 + 0x17c) = 0xffffffff;
    *(undefined8 *)((longlong)puVar2 + 0x184) = 0;
    *(undefined2 *)(puVar2 + 0x32) = 0x100;
    puVar2[0x36] = lVar4;
    puVar2[0x37] = 0;
    *puVar2 = &PTR_FUN_180235650;
    *(uint *)((longlong)puVar2 + 0x1ac) = uVar1;
    puVar2[0x20] = &PTR_FUN_180235790;
    *(longlong *)((longlong)puVar2 + 0x1a4) = lVar5;
    *(longlong *)((longlong)puVar2 + 500) = lVar5;
    puVar2[0x40] = lVar4;
    puVar2[0x41] = 0;
    puVar2[0x38] = 0;
    puVar2[0x39] = 0;
    puVar2[0x3a] = 0xffffffffffffffff;
    puVar2[0x3b] = 0xffffffffffffffff;
    *(undefined2 *)(puVar2 + 0x3e) = 0;
    puVar2[0x3c] = 0xffffffff;
    puVar2[0x3d] = 0;
    *(bool *)((longlong)puVar2 + 0x24c) = *(uint *)((longlong)puVar2 + 0x2c) < 0xe;
    *(uint *)((longlong)puVar2 + 0x1fc) = uVar1;
    puVar2[0x42] = 0;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0xffffffffffffffff;
    puVar2[0x45] = 0xffffffffffffffff;
    *(undefined2 *)(puVar2 + 0x48) = 0;
    puVar2[0x46] = 0xffffffff;
    puVar2[0x47] = 0;
    *(undefined2 *)((longlong)puVar2 + 0x24d) = 0;
    *(uint *)(puVar2 + 0x33) = param_2;
    *(uint *)((longlong)puVar2 + 0x19c) = param_3;
    *(undefined4 *)(puVar2 + 0x34) = param_6;
    *(float *)((longlong)puVar2 + 0x244) = (float)param_2 / (float)param_4;
    *(float *)(puVar2 + 0x49) = (float)param_3 / (float)param_5;
    puVar2[0x4b] = 0;
    puVar2[0x4a] = 0;
    puVar2[0x4d] = 0;
    puVar2[0x4c] = 0;
    puVar2[0x4f] = 0;
    puVar2[0x4e] = 0;
    puVar2[0x51] = 0;
    puVar2[0x50] = 0;
    *(undefined4 *)(puVar2 + 0x21) = 2;
    uVar3 = FUN_180094468(puVar2);
    if ((uVar3 & 1) != 0) {
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      return puVar2 + 0x20;
    }
    FUN_180095bb0(puVar2);
    FUN_180102fc0(puVar2,0x290);
  }
  return (undefined8 *)0x0;
}

