/*
 * FUN_18002db90 at 18002db90
 * undefined FUN_18002db90(void)
 * Address ranges: 18002db90-18002db97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18002db90(longlong param_1,uint param_2,undefined4 param_3,longlong *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (param_2 < 0x10) {
    uVar4 = (ulonglong)param_2;
    FUN_18002a810(param_1,0,0,0);
    if (param_4 == (longlong *)0x0) {
      FUN_180056840(param_1,uVar4,param_3,0,0,param_5,param_6,param_7,(char)param_8,1);
      param_1 = param_1 + uVar4 * 8;
      *(undefined8 *)(param_1 + 64000) = 0;
      *(undefined8 *)(param_1 + 0xfa80) = 0;
    }
    else {
      iVar2 = (**(code **)(*param_4 + 8))(param_4);
      if (iVar2 == 1) {
        plVar3 = (longlong *)0x0;
        plVar5 = param_4 + -4;
      }
      else {
        plVar5 = (longlong *)0x0;
        (**(code **)(param_4[-0x1c] + 0xf8))(param_4 + -0x1c,param_8);
        plVar3 = param_4 + -0x1c;
      }
      lVar1 = param_1 + uVar4 * 8;
      *(longlong **)(lVar1 + 64000) = plVar3;
      *(longlong **)(lVar1 + 0xfa80) = plVar5;
      FUN_180056840(param_1,uVar4,param_3,plVar3,plVar5,param_5,param_6,param_7,(char)param_8,1);
    }
  }
  return;
}

