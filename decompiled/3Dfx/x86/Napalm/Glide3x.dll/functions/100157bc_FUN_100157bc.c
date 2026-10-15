/*
 * FUN_100157bc at 100157bc
 * undefined __thiscall FUN_100157bc(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6)
 * Address ranges: 100157bc-10015900
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100157bc(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  
  puVar3 = FUN_1003d6c3((void *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1630),
                        (byte *)&PTR_s_POSITION_1005f6f0,(undefined4 *)0x1);
  FUN_1000a6eb(*(void **)((int)this + 0x138),5,puVar3,*(undefined4 *)((int)this + 0x998),
               *(undefined4 *)((int)this + 0x970));
  FUN_1000b0cd(*(void **)((int)this + 0x138),(char)param_6);
  param_6 = 0;
  iVar4 = FUN_10012f90(this,extraout_ECX,&param_6);
  fVar1 = (float)param_4;
  if (param_4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)param_5;
  if (param_5 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (param_6 != 0) {
    iVar5 = iVar4 * 0x10;
    *(undefined4 *)(iVar5 + param_6) = 0;
    *(undefined4 *)(iVar5 + 4 + param_6) = 0;
    *(undefined4 *)(iVar5 + 8 + param_6) = param_3;
    *(undefined4 *)(iVar5 + 0xc + param_6) = 0;
    *(float *)(iVar5 + 0x10 + param_6) = fVar1;
    *(undefined4 *)(iVar5 + 0x14 + param_6) = 0;
    *(undefined4 *)(iVar5 + 0x18 + param_6) = param_3;
    *(undefined4 *)(iVar5 + 0x1c + param_6) = 0;
    *(undefined4 *)(iVar5 + 0x20 + param_6) = 0;
    *(float *)(iVar5 + 0x24 + param_6) = fVar2;
    *(undefined4 *)(iVar5 + 0x28 + param_6) = param_3;
    *(undefined4 *)(iVar5 + 0x2c + param_6) = 0;
    *(float *)(iVar5 + 0x30 + param_6) = fVar1;
    *(float *)(iVar5 + 0x34 + param_6) = fVar2;
    *(undefined4 *)(iVar5 + 0x38 + param_6) = param_3;
    *(undefined4 *)(iVar5 + 0x3c + param_6) = 0;
    FUN_1003eb8b(*(int *)((int)this + 0x9a0) + 0x38);
    FUN_1000b055(*(void **)((int)this + 0x138),*(int *)((int)this + 0x9a0),0x10,0,0);
    FUN_1004400a(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),4,1,iVar4,0);
  }
  return;
}

