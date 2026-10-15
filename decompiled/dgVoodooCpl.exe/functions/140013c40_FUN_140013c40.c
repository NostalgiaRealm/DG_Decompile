/*
 * FUN_140013c40 at 140013c40
 * undefined8 * __fastcall FUN_140013c40(void)
 * Address ranges: 140013c40-140013cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140013c40(void)

{
  undefined4 uVar1;
  longlong lVar2;
  FARPROC pFVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_14002423c(0x600);
  puVar4 = (undefined8 *)(lVar2 + 0x47U & 0xffffffffffffffc0);
  puVar4[-1] = lVar2;
  FUN_140013330(puVar4,&PTR_s_DGD3D12ROOT_14002c140);
  FUN_140013ce0(puVar4 + 0x66);
  *puVar4 = &PTR_FUN_140029018;
  uVar1 = FUN_140013450((longlong)puVar4);
  if ((char)uVar1 != '\0') {
    pFVar3 = GetProcAddress((HMODULE)puVar4[0x59],"D3D12SerializeRootSignature");
    puVar4[0xa6] = pFVar3;
    if (pFVar3 != (FARPROC)0x0) {
      *(undefined1 *)((longlong)puVar4 + 0x302) = 0;
      return puVar4;
    }
    FUN_140013580((longlong)puVar4);
  }
  (**(code **)*puVar4)(puVar4,0);
  FUN_140024c8c((LPVOID)puVar4[-1]);
  return (undefined8 *)0x0;
}

