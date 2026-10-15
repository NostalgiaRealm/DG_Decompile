/*
 * FUN_1001e8a7 at 1001e8a7
 * undefined4 __fastcall FUN_1001e8a7(void * param_1)
 * Address ranges: 1001e8a7-1001ea33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1001e8a7(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  HMODULE pHVar3;
  bool bVar4;
  uint3 extraout_var;
  int iVar5;
  undefined4 uVar6;
  uint3 extraout_var_00;
  uint3 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)((int)param_1 + 0x1dc) = 0;
  pHVar3 = DAT_1005fa00;
  *(undefined4 *)((int)param_1 + 0x210) = 0;
  bVar4 = FUN_10047056(*(void **)(*(int *)((int)param_1 + 0x1e8) + 0x3680),
                       *(int *)(*(int *)((int)param_1 + 0x1e8) + 0x3684),pHVar3,2,0x1005e434,
                       0x1005f2fc,(int *)((int)param_1 + 0x1f8),(int)param_1 + 0x200);
  uVar7 = extraout_var;
  if (bVar4) {
    local_1c = 0x140000;
    local_18 = 2;
    *(undefined4 *)((int)param_1 + 0x1ec) = 0;
    local_14 = 1;
    local_10 = 0x10000;
    local_c = 0;
    *(undefined4 *)((int)param_1 + 0x1f0) = 0;
    local_8 = 0x50;
    *(undefined4 *)((int)param_1 + 500) = 0;
    puVar1 = (undefined4 *)((int)param_1 + 0x208);
    piVar2 = (int *)**(undefined4 **)(*(int *)((int)param_1 + 0x1e8) + 0x3688);
    iVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_1c,0,puVar1);
    uVar6 = extraout_ECX;
    if (-1 < iVar5) {
      local_30 = 2;
      local_2c = 2;
      local_34 = 0x10000;
      local_28 = 0x10000;
      local_24 = 0;
      local_20 = 4;
      piVar2 = (int *)**(undefined4 **)(*(int *)((int)param_1 + 0x1e8) + 0x3688);
      iVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_34,0,(int)param_1 + 0x20c);
      if (-1 < iVar5) {
        *(undefined4 *)((int)param_1 + 0xf0) = 0;
        *(undefined2 *)((int)param_1 + 0x1ac) = 0;
        *(undefined1 *)((int)param_1 + 0x1ae) = 0;
        *(undefined4 *)((int)param_1 + 0x1e0) = 0xffffffff;
        *(undefined4 *)(*(int *)((int)param_1 + 0x1e8) + 0x3620) =
             *(undefined4 *)((int)param_1 + 0xe4);
        uVar6 = *(undefined4 *)(*(int *)((int)param_1 + 0x1e8) + 0x3688);
        *(undefined4 *)((int)param_1 + 0x21c) =
             *(undefined4 *)(*(int *)((int)param_1 + 0x1e8) + 0x3680);
        *(undefined4 *)((int)param_1 + 0x220) = uVar6;
        *(undefined1 *)((int)param_1 + 0x218) = 1;
        uVar6 = FUN_1001ed92(param_1,1,1);
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      *puVar1 = 0;
      uVar6 = extraout_ECX_00;
    }
    FUN_10047167(uVar6,2,(int)param_1 + 0x1f8,(int)param_1 + 0x200);
    uVar7 = extraout_var_00;
  }
  return (uint)uVar7 << 8;
}

