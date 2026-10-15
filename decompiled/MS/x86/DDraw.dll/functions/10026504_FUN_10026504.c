/*
 * FUN_10026504 at 10026504
 * undefined4 __thiscall FUN_10026504(void * this, int * param_1, uint param_2)
 * Address ranges: 10026504-100265b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10026504(void *this,int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  int local_c;
  
  uVar1 = 0x80070057;
  if ((param_1 != (int *)0x0) && ((param_2 & 0xfffffffe) == 0)) {
    FUN_10060d45(param_1,0,0x428);
    iVar2 = (**(code **)(*(int *)this + 0x48))();
    FUN_10002061(&local_34,(undefined4 *)(iVar2 + 0x174));
    param_1[0x102] = local_30;
    param_1[0x106] = local_20;
    param_1[0x107] = iStack_1c;
    param_1[0x103] = local_2c;
    param_1[0x104] = local_28;
    param_1[0x108] = iStack_18;
    param_1[0x105] = local_24;
    param_1[0x109] = iStack_14;
    param_1[0x101] = local_10;
    param_1[0x100] = local_c;
    uVar1 = 0;
    *param_1 = 0x6f566764;
    param_1[1] = 0x6f6f646f;
    *(undefined1 *)(param_1 + 2) = 0;
    piVar3 = (int *)"dgVoodoo DX API Layer";
    piVar4 = param_1 + 0x80;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    *(short *)piVar4 = (short)*piVar3;
  }
  return uVar1;
}

