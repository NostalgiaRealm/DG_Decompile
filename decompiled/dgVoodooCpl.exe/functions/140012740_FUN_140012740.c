/*
 * FUN_140012740 at 140012740
 * undefined8 __fastcall FUN_140012740(longlong param_1)
 * Address ranges: 140012740-14001280b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140012740(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  FARPROC pFVar3;
  
  puVar2 = (undefined8 *)FUN_14002423c(0x5b8);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_140013330(puVar2,&PTR_s_DGD3D12ROOT_14002c140);
    FUN_140013ce0(puVar2 + 0x66);
    *puVar2 = &PTR_FUN_140029018;
    *(undefined8 **)(param_1 + 0x480) = puVar2;
    uVar1 = FUN_140013450((longlong)puVar2);
    if ((char)uVar1 != '\0') {
      pFVar3 = GetProcAddress((HMODULE)puVar2[0x59],"D3D12SerializeRootSignature");
      puVar2[0xa6] = pFVar3;
      if (pFVar3 != (FARPROC)0x0) {
        *(undefined1 *)((longlong)puVar2 + 0x302) = 0;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x480);
        return CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x480) >> 8),1);
      }
      FUN_140013580((longlong)puVar2);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x480);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined8 *)(param_1 + 0x480) = 0;
  return 0;
}

