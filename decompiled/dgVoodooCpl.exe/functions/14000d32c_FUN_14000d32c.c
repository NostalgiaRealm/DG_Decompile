/*
 * FUN_14000d32c at 14000d32c
 * undefined1 __fastcall FUN_14000d32c(undefined8 param_1, longlong param_2)
 * Address ranges: 14000d32c-14000d442
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_14000d32c(undefined8 param_1,longlong param_2)

{
  ushort *puVar1;
  HRESULT HVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined8 local_res8 [2];
  longlong *local_res18;
  ushort *local_res20;
  longlong *local_28 [2];
  
  uVar5 = 0;
  local_res8[0] = param_1;
  HVar2 = CoCreateInstance((IID *)&DAT_1400263a8,(LPUNKNOWN)0x0,1,(IID *)&DAT_1400285b0,&local_res18
                          );
  if (-1 < HVar2) {
    iVar3 = (**(code **)(*local_res18 + 0x50))(local_res18,local_res8);
    if (-1 < iVar3) {
      (**(code **)(*local_res18 + 0x48))(local_res18,(uint)local_res8[0] | 0x20);
    }
    iVar3 = (**(code **)(*local_res18 + 0x18))(local_res18,0);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*local_res18 + 0xa0))(local_res18,local_28);
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*local_28[0] + 0x28))(local_28[0],0x80028000);
        puVar1 = local_res20;
        if (-1 < iVar3) {
          uVar4 = FUN_14000a708(param_2,local_res20);
          if (uVar4 == 0xffffffff) {
            FUN_14000a9b8(param_2,puVar1,0,'\x01');
          }
          else {
            FUN_14000e4a0(param_2,0x402,uVar4);
          }
          FUN_14000a2e0(param_2);
          FUN_14000e4d0(param_2,0x402);
          CoTaskMemFree(local_res20);
          uVar5 = 1;
        }
        (**(code **)(*local_28[0] + 0x10))();
      }
    }
    (**(code **)(*local_res18 + 0x10))();
  }
  return uVar5;
}

