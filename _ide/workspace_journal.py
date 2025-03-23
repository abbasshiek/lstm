# 2025-03-23T17:41:15.877545700
import vitis

client = vitis.create_client()
client.set_workspace(path="vlsi_lstm")

comp = client.create_hls_component(name = "FPGA_hls_component_new",cfg_file = ["LSTM_hls_config_new.cfg"],template = "empty_hls_component")

comp = client.get_component(name="FPGA_hls_component_new")
comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION")

